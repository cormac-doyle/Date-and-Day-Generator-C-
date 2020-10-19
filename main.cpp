// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdafx.h"
#include <iostream>
#include "date.h"
#include "dateAndDay.h"
#include "dateDayAndWeek.h"

int main()
{
	
	//creates 2 new objects, inputs 2 dates, and prints the difference in days between them
	date *d = new date;
	d->setDate(2018, 10, 18);
	date *e = new date;
	e->setDate(2018, 10, 15);
	int r = d->difference(e);
	std::cout << "The difference is " << r << " days." << std::endl;

	delete d;
	delete e;
	

	//creates new object and prints the day name of the date in enumeration form (Mon=1,Tue=2, ...etc.)
	dateAndDay *f = new dateAndDay;
	f->setDate(2018, 10, 30);

	dayName dayExample;
	dayExample = f->dayOfWeek();
	std::cout << "Day Name (Mon=1,Tue=2, ...etc.): "<< dayExample << std::endl;

	delete f;


	/* creates new object and prints the week number for that given year
	source for week number calculation:
	https://en.wikipedia.org/wiki/ISO_week_date?fbclid=IwAR08uXMiv_ycntDunCYFDfrS674SrqfUDLk8rq9wgllCvUiV-eR7HZ89Aig#Calculating_the_week_number_of_a_given_date
	*/

	dateDayAndWeek *g = new dateDayAndWeek;
	g->setDate(2018, 10, 30);

	int weekExample;
	weekExample = g->weekNumber();

	if (weekExample == 0)std::cout << "Week Number: "<<weekExample<<  " -> this date belongs to the last week of the previous year.\n";
	else if (weekExample == 53)std::cout << "Week Number: "<<weekExample<< " -> this date belongs to the first week of the next year.\n";
    else std::cout <<"Week Number: "<< weekExample << std::endl;

	delete g;

}
