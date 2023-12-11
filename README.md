# UnrealDelegates

This demo shows a basic example of using delegates to communicate between actors
![In game](img\trigger_and_delegates.png)

![Sender](img\trigger_nodes.png)
The sender needs to 
1. create event dispatchers that can be bound to and 
2. call these dispatchers when the trigger is collided with


![Sender](img\delegate.png)
Delegates need to 
1. *bind* to the event dispatchers in the sender
2. create a custom event as part of that binding that is invoked when the events are triggered.



