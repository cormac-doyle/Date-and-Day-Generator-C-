#include "stdafx.h"
#include <iostream>
#include "date.h"

date::date() {
	std::cout << "default constructor called\n";
};

date::~date() {
	std::cout << "destructor called\n";
};

void date::setDate(int y, int m, int d) {
	this->year = y;
	this->month = m;
	this->day = d;

	int leapDays = (this->year - 1) / 4;
	leapDays -= (this->year - 1) / 100;
	leapDays += (this->year - 1) / 400;

	this->dayNumber = 365 * (this->year - 1) + leapDays;


	//ordinalDate will count up the days in the CURRENT year, not including any previous years.
	this->ordinalDate=0;


	// now account for all the months completed in the year to date
	int monthLength[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < this->month - 1; i++) {
		this->dayNumber += monthLength[i];
		this->ordinalDate += monthLength[i];
	};

	// if this year is a leap year and we're after february, add 1
	if ((this->month > 2) && (((this->year % 4 == 0) && (this->year % 100 != 0)) || (this->year % 400 == 0))) {
		this->dayNumber++;
		this->ordinalDate++;
	}


	//minus 1 because we want the counter to start from 0, not from 1
	this->dayNumber += this->day - 1;
	this->ordinalDate += this->day-1;

};

int date::difference(date *p) {
	int d;
	d = this->dayNumber - p->dayNumber;
	return d;
};

int date::getDayNumber() {
	return this->dayNumber;
};

int date::getOrdinalDate() {
	return this->ordinalDate;
}