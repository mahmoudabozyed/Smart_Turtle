import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abouzeid/smart_turtle_ws/install/smart_turtle_pkg'
