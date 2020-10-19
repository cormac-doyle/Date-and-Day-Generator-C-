#include "stdafx.h"
#include <iostream>
#include "date.h"
#include "dateAndDay.h"
#include "dateDayAndWeek.h"

//source for week number calculation
//https://en.wikipedia.org/wiki/ISO_week_date?fbclid=IwAR08uXMiv_ycntDunCYFDfrS674SrqfUDLk8rq9wgllCvUiV-eR7HZ89Aig#Calculating_the_week_number_of_a_given_date


int dateDayAndWeek::weekNumber() {

	int weekNum = (getOrdinalDate() - dayOfWeek() + 10) / 7;
	return weekNum;

}

