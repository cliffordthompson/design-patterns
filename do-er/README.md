# Do-er Pattern

The purpose of the Do-er Pattern is to only provide open instance of polymorphic function
in an inheritance hierarchy.

This doesn’t reduce the number of function in a derived class, it only reduces the number of function in the public interface. The can increase the readability.


## Advantages

- Allows the developer to only place one instance of the virtual function in the public interface, rather than having a instance for each derived class. This can increase readability.
- Prevents clients from explicitly calling an instance of a virtual function on a class within the inheritance
hierarchy, rather than just allow polymorphism to take of things.

## Disadvantages
- Adds a level of indirection via a pass-through, so parameters must be properly passed to the do-er
function.
- An additional function call is incurred.
