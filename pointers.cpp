#include <iostream>
using namespace std;

int main() {
	int x = 7;
	int y = x;
	int& z = x;//puts z to same address of x in ram( they are equals to each other everytime )
	x = 11;
	cout << "Value of x is: " << x << "\n";
	cout << "Value of y is: " << y << "\n";
	cout << "Value of z is: " << z << "\n";
	cout << "--------------------------------------------------" << "\n";
	int* ptr = &x;//holds the address of x 
	cout << "Value of x is: " << x << "\n";
	cout << "Address of x is: " << &x << "\n";
	cout << "Value of ptr is: " << ptr << "\n";
	cout << "Address of ptr is: " << &ptr << "\n";//ptr is a variable thats why it has also an address
	cout << "Accesing variable via pointer: " << *ptr << "\n";
	cout << "--------------------------------------------------" << "\n";
	double a = 3.14;
	double* b = &a;
	double* c = &a;
	cout << "Address of a is: " << &a << "\n";
	cout << "Address of b is: " << &b << "\n";
	cout << "Address of c is: " << &c << "\n\n";
	cout << "Value of a is: " << a << "\n";
	cout << "Value of b is: " << b << "\n";
	cout << "Value of c is: " << c << "\n\n";
	*b = 70.19;//changing the variable value with using its address
	cout << "Value of a is: " << a << "\n";
	cout << "Value of b is: " << b << "\n";
	cout << "Value of c is: " << c << "\n";
	cout << "Value of b address is: " << *b << "\n";
	cout << "Value of c address is: " << *c << "\n";
	cout << "--------------------------------------------------" << "\n";
	int d = 7;
	int* ptr1 = &d;

	cout << "ptr1: " << ptr1 << "\n";
	cout << "*ptr1: " << *ptr1 << "\n";
	ptr1++;//4 byte 
	cout << "ptr1: " << ptr1 << "\n";
	cout << "*ptr1: " << *ptr1 << "\n";
	
}