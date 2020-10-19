#include "stdafx.h"
#include <iostream>
#include "date.h"
#include "dateAndDay.h"



dayName dateAndDay::dayOfWeek() {

	switch (getDayNumber() % 7) {

	case 0:
		return Monday;

	case 1:
		return Tuesday;

	case 2:
		return Wednesday;

	case 3:
		return Thursday;

	case 4:
		return Friday;

	case 5:
		return Saturday;

	case 6:
		return Sunday;

	}
}