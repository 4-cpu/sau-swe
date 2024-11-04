#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numeros1, i, j, control=1;
	cout << "Enter a number: ";
	cin >> numeros1;
	for (i = 2; i <= numeros1; i++) {
		control = 1;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j== 0) {
				control = 2;
				break;
			}

		}
		if (control == 1)
			cout << i << " ";
	
	}
	return 0;
}