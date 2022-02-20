/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab 3-1
 Date Assigned:2/14/2022
 Due Date:     2/22/2022 14:30
 Description:
 Widgets
 Certification of Authenticity:
 I certify that this is entirely my own work, except where I have given
 fully-documented references to the work of others. I understand the
 definition and consequences of plagiarism and acknowledge that the assessor
 of this assignment may, for the purpose of assessing this assignment:
 - Reproduce this assignment and provide a copy to another member of
 academic staff; and/or
 - Communicate a copy of this assignment to a plagiarism checking
 service (which may then retain a copy of this assignment on its
 database for the purpose of future plagiarism checking)
 */

#ifndef __widget__widget__
#define __widget__widget__

#include <string>
#include <sstream>
using namespace std;

enum WidgetType {
	INVALID_TYPE=-1, WEATHER, QUOTE, STOCK, NUM_WIDGET_TYPES
};

const string WIDGET_NAMES[NUM_WIDGET_TYPES]= { "Weather2000", "Of-The-Day",
		"Ups-and-Downs" };

class Widget {
public:
	Widget(WidgetType type);
	Widget(const Widget &rhs);
	string getModelName() const {
		return wModelName;
	}
	;

private:
	WidgetType wType;
	int wID;
	string wModelName;
	//add static data member
	static int ID_CURRENT;
	void generateModelName();
};

#endif /* defined(__widget__widget__) */
