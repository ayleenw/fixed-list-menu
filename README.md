# Fixed List implementation in C++ for use with LCD display

This implements a menu to be shown on a LCD display (4 lines by 20 characters), connected to a microcontroller (STM32, Arduino, you name it) and controlled by a rotary encoder (alternatively it could be used with 3 buttons: up, down and select).

Assuming that the menu structure is known and fixed (no new menu entries are created during runtime), and one does not want to put the list nodes on the heap, this version does not use a classic linked list with dynamic memory allocation, but creates a fixed number of list entries and fills them with the menu entries defined in a dedicated header file.

This is using char* instead of string, because the latter is not available on STM32F0* controllers.

In this state, menu lines are printed to the console for development and debugging.
