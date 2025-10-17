// Kayla Berridge
// 09/14/2025
// Project One: Chada Tech 
// Program outputs a 24- hour clock and a 12- hour clock
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"

using namespace std;

void displayMenu() {
	cout << "\n***************************\n";
	cout << "* 1 - Add One Hour        *\n";
	cout << "* 2 - Add One Minute      *\n";
	cout << "* 3 - Add One Second      *\n";
	cout << "* 4 - Exit Program        *\n";
	cout << "***************************\n";
	cout << "Enter choice: ";
}

int main() {
	int h, m, s;

	// Set initial time
	while (true) {
		cout << "Enter initial time (HH MM SS in 24-hour format): ";
		cin >> h >> m >> s;

		if (!cin.fail() && h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
			break;
		}
		cout << "Invalid choice. Please try again.\n";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	Clock myClock(h, m, s);

	int choice;
	while (true) {
		myClock.displayClocks();
		displayMenu();
		cin >> choice;

		if (choice == 1) myClock.addOneHour();
		else if (choice == 2) myClock.addOneMinute();
		else if (choice == 3) myClock.addOneSecond();
		else { (choice == 4);
		break;
		}
	}
	return 0;
}