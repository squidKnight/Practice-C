# Practice-C
Trying to learn and do stuff with c. Also trying to learn about finite state machines. This hopefully will make it easier to make a finite state machine for botball robots To do list

change the signature of line_runBehavior to take in time to run, motor ports, and sensor port. also may want add an override to line_runBehavior that takes in 2 sensors for double line following.
make state object and transition object
make a sensor object that can retrieve beliefs from the robot's sensors
make a motor/servo object. This can provide some organization for motors and servos, their ports and values.
make it so runBehavior is virtual in Behavior
make line_runBehavior use the sensor object
