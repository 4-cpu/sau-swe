Pointer and Reference Demonstration in C++

Overview

This C++ program demonstrates the use of references and pointers in memory management. The key concepts covered include:

Reference variables

Pointer variables

Address manipulation

Dereferencing pointers

Pointer arithmetic

Code Explanation

References

A reference (int& z = x;) is an alias to an existing variable and shares the same memory address.

Changing x updates z since they are bound to the same memory location.

Pointers

A pointer (int* ptr = &x;) stores the memory address of another variable.

Using *ptr (dereferencing) accesses the value at the stored address.

Pointer Arithmetic

Incrementing a pointer (ptr1++) moves it forward by the size of the data type (e.g., 4 bytes for an int).

Double Pointers

Multiple pointers (double* b = &a; double* c = &a;) can point to the same variable.

Modifying *b also updates a and affects all pointers referring to a.

Sample Output

Value of x is: 11
Value of y is: 7
Value of z is: 11
--------------------------------------------------
Value of x is: 11
Address of x is: 0x61ff08
Value of ptr is: 0x61ff08
Address of ptr is: 0x61ff04
Accesing variable via pointer: 11
--------------------------------------------------
Address of a is: 0x61ff00
Address of b is: 0x61fef8
Address of c is: 0x61fef0

Value of a is: 3.14
Value of b is: 0x61ff00
Value of c is: 0x61ff00

Value of a is: 70.19
Value of b is: 0x61ff00
Value of c is: 0x61ff00
Value of b address is: 70.19
Value of c address is: 70.19
--------------------------------------------------
ptr1: 0x61fee8
*ptr1: 7
ptr1: 0x61feec
*ptr1: random_value (undefined memory)

Key Takeaways

References always refer to the same variable, while pointers can be reassigned.

Dereferencing a pointer accesses/modifies the variable at the stored address.

Pointer arithmetic moves the pointer in memory by the size of its data type.

Modifying a variable via a pointer affects all references and pointers pointing to it.

Usage

To compile and run the program, use:

g++ pointers.cpp -o pointers
./pointers

Author

4-cpu
