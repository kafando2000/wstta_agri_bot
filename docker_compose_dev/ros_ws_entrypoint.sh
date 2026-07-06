#!/bin/bash

set -e

# Source ROS environment
source "/opt/ros/jazzy/setup.bash"
echo "sourcing evironment"
# Source the workspace setup script if it exists
if [ -f "$ROS_WS/install/setup.bash" ]; then
    source "$ROS_WS/install/setup.bash"
fi

# Execute any additional commands passed to the entrypoint
exec "$@"