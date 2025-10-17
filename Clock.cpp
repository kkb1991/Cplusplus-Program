#include "Clock.h"
#include <iostream>
#include <iomanip>

using namespace std;

Clock::Clock(int h, int m, int s) {
	setTime(h, m, s);
}

void Clock::setTime(int h, int m, int s) {
	if (h >= 0 && h < 24) hours = h;
	else hours = 0;

	if (m >= 0 && m < 60) minutes = m;
	else minutes = 0;

	if (s >= 0 && s < 60) seconds = s;
	else seconds = 0;
}

void Clock::addOneHour() {
	hours = (hours + 1) % 24;
}

void Clock::addOneMinute() {
	minutes++;
	if (minutes >= 60) {
		minutes = 0;
		addOneMinute();
	}
}

void Clock::addOneSecond() {
	seconds++;
	if (seconds >= 60) {
		seconds = 0;
		addOneMinute();
	}
}

void Clock::displayClocks() const
{
	cout << "***************************   ***************************\n";
	cout << "*      12-Hour Clock      *   *      24-Hour Clock      *\n";
	cout << "*      ";

	//12-Hour format
	int displayHour = hours % 12;
	if (displayHour == 0) displayHour = 12;
	string meridian = (hours >= 12) ? "PM" : "AM";

	cout << setw(2) << setfill('0') << displayHour << ":"
		<< setw(2) << setfill('0') << minutes << ":"
		<< setw(2) << setfill('0') << seconds;
	cout << "      *\n";
	cout << "***************************   ***************************\n";
}
