#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>
#include <string>

class Clock {
private:
	int hours;
	int minutes;
	int seconds;

public:
	// Constructor
	Clock(int h = 0, int m = 0, int s = 0);

	// Set time
	void setTime(int h, int m, int s);

	// Add time
	void addOneHour();
	void addOneMinute();
	void addOneSecond();

	// Display
	void displayClocks() const;
};

#endif