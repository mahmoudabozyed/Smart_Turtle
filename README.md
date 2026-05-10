# 🐢 Smart Turtle Controller

> A ROS 2 Humble final project that controls a Turtlesim turtle using custom messages, parameters, and services — organized across three modular packages.

---

## 📁 Workspace Structure

```
ros2_ws/
└── src/
    ├── smart_turtle_py/              # Logic & Control Package
    │   ├── smart_turtle_py/
    │   │   ├── command_publisher.py  # Reads params → publishes TurtleCommand
    │   │   ├── turtle_controller.py  # Subscribes → sends Twist to turtlesim
    │   │   └── reset_node.py         # Calls /reset & /clear every 10 sec
    │   ├── package.xml
    │   └── setup.py
    │
    ├── smart_turtle_interface/       # Interface Package
    │   ├── msg/
    │   │   └── TurtleCommand.msg     # Custom message: command (string) + speed (float)
    │   ├── package.xml
    │   └── CMakeLists.txt
    │
    └── smart_turtle_bringup/         # Integration & Launch Package
        ├── config/
        │   └── turtle_param.yaml     # System parameters: pattern & speed
        ├── launch/
        │   └── smart_turtle.launch.py
        ├── package.xml
        └── setup.py
```

---

## 🏗️ System Architecture

```
┌─────────────────────────────────────────────────────────┐
│                    smart_turtle_bringup                 │
│   (Launch File + turtle_param.yaml)                     │
└────────────────────────┬────────────────────────────────┘
                         │ loads params & launches all nodes
         ┌───────────────┼───────────────────┐
         ▼               ▼                   ▼
┌────────────────┐ ┌──────────────┐ ┌───────────────┐
│command_publisher│ │turtle_controll│ │  reset_node   │
│     .py        │ │    er.py      │ │    .py        │
│                │ │               │ │               │
│ Reads params   │ │ Subscribes to │ │ Every 10 sec: │
│ from YAML      │ │ /smart_turtle/│ │  - /reset     │
│                │ │ command       │ │  - /clear     │
│ Publishes      │ │               │ │               │
│ TurtleCommand  │ │ Publishes     │ └───────┬───────┘
│ every 1 sec    │ │ Twist msg     │         │ service calls
└───────┬────────┘ └───────┬───────┘         │
        │                  │                  │
        │ /smart_turtle/   │ /turtle1/        ▼
        │ command          │ cmd_vel    ┌──────────────┐
        └──────────────────┘           │  Turtlesim   │
                  (TurtleCommand msg)  │    Node      │
                                       └──────────────┘

   ┌───────────────────────────┐
   │  smart_turtle_interface   │
   │  TurtleCommand.msg:       │
   │    string  command        │
   │    float64 speed          │
   └───────────────────────────┘
        (used by publisher & controller)
```

---

## ⚙️ Configuration

Edit the parameters in:

```
smart_turtle_bringup/config/turtle_param.yaml
```

```yaml
command_publisher_node:
  ros__parameters:
    pattern: "circle"    # Options: circle | square | spiral
    speed: 1.0           # Movement speed (float)
```

| Parameter | Description                          | Options                   |
|-----------|--------------------------------------|---------------------------|
| `pattern` | The movement shape the turtle draws  | `circle`, `square`, `spiral` |
| `speed`   | The turtle's movement speed          | Any positive float (e.g. `1.0`) |

---

## 🚀 How to Open & Run in Your Workspace

### 1. Set Up Your ROS 2 Workspace

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
```

Place (or clone) the three packages inside `src/`:
```
src/smart_turtle_py/
src/smart_turtle_interface/
src/smart_turtle_bringup/
```

### 2. Install Dependencies

```bash
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
```

### 3. Build the Workspace

```bash
cd ~/ros2_ws
colcon build
```

> ⚠️ Build `smart_turtle_interface` first if you encounter message-not-found errors:
> ```bash
> colcon build --packages-select smart_turtle_interface
> colcon build
> ```

### 4. Source the Workspace

```bash
source ~/ros2_ws/install/setup.bash
```

> Add this to your `~/.bashrc` to avoid running it every session:
> ```bash
> echo "source ~/ros2_ws/install/setup.bash" >> ~/.bashrc
> ```

### 5. (Optional) Edit Parameters

```bash
nano ~/ros2_ws/src/smart_turtle_bringup/config/turtle_param.yaml
```

### 6. Launch the System

```bash
ros2 launch smart_turtle_bringup smart_turtle.launch.py
```

The Turtlesim window will open and the turtle will begin drawing the configured pattern automatically.

---

## 🔍 Monitoring with RQT

While the system is running, open RQT to inspect nodes, topics, and message flow:

```bash
# Full RQT GUI
rqt

# Node graph only
ros2 run rqt_graph rqt_graph

# Monitor the custom topic
ros2 topic echo /smart_turtle/command

# List all active nodes
ros2 node list

# List all active topics
ros2 topic list
```

---

## 📦 Package Summary

| Package | Type | Role |
|---|---|---|
| `smart_turtle_py` | Python (ament_python) | Core logic — publisher, controller, reset nodes |
| `smart_turtle_interface` | CMake (ament_cmake) | Custom message definition (`TurtleCommand.msg`) |
| `smart_turtle_bringup` | Python (ament_python) | Launch file + YAML config |

---

## 📋 Node Summary

| Node | File | Publishes | Subscribes | Services Called |
|---|---|---|---|---|
| Command Publisher | `command_publisher.py` | `/smart_turtle/command` | — | — |
| Turtle Controller | `turtle_controller.py` | `/turtle1/cmd_vel` | `/smart_turtle/command` | — |
| Reset Node | `reset_node.py` | — | — | `/reset`, `/clear` |

---

## 🛠️ Troubleshooting

**Turtlesim window doesn't open:**
```bash
sudo apt install ros-humble-turtlesim
```

**Custom message not found after build:**
```bash
colcon build --packages-select smart_turtle_interface
source install/setup.bash
colcon build
```

**Nodes not found at launch:**
```bash
# Make sure you've sourced the workspace
source ~/ros2_ws/install/setup.bash
```

---

*Project developed as part of the ROS 2 Humble Foundations Course — Edges For Training Team*
