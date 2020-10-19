#pragma once



enum  dayName { Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

class date {
private:
	int year, month, day;
	int dayNumber;
	int ordinalDate;

public:
	date();
	~date();
	void setDate(int y, int m, int d);
	int difference(date *p);
	int getDayNumber();
	int getOrdinalDate();

};