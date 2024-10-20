# Pimpl Pattern

The purpose of the Pimpl Pattern is to hide the private implementation
details of a C++ class in pointers to structures which are fully defined in the source file.

## Advantages

- Updates the member variables of a class do not cause a re-compilation of client code, since the changes
are restricted to source file (.cpp)
- Implementation details are hidden from clients, and thus reduce the amount of code that needs
  to be

## Disadvantages
- Dynamic memory allocation occurs everytime an instance of the class is created, and thus
the class most exists outside of the stack.
- Increases the chances of memory leaks if smart pointers are not used for the private implmentations.
