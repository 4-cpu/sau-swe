#include <iostream>
#include <string>
using namespace std;

int main() {
	bool ships[4][4] = {
		{0,0,1,1},
		{0,0,0,0},
		{0,0,0,1},
		{0,1,0,0}
	};
	int hits = 0, numberOfTurns = 0;
	int row, column;
	while (hits < 4) {
		cout << "Selecting coordinates" << endl;
		cout << "Choose a row number between 0-3: ";
		cin >> row;
		cout << "Choose a column number between 0-3: ";
		cin >> column;
		if (ships[row][column]) {
			ships[row][column] = 0;
			hits++;
			cout << "You hit! " << (4 - hits) << " ships left" "\n""\n";
		}
		else {
			cout << "You missed." << "\n""\n";
		}
		numberOfTurns++;
	}
	cout << "Victory!" << endl;
	cout << "You won in " << numberOfTurns << " rounds!" << endl;
}