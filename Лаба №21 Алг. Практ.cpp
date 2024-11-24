#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

int main()
{
    int first, second;

	cout << "P";
	cin >> first >> second;

	cout << "Press any key to continue . . ." << endl;
	_getch();
	system("cls");

	while (true) {
		int input;

		if (cin >> input) {
			if (input == first || input == second) {
				cout << "Press any key to continue . . ." << endl;
				_getch();
				system("cls");
			} else {
				while (true) {
					system("cls");
				}
			}
		} else {
			while (true) {
				system("cls");
			}
		}
	}

	return 0;
}


