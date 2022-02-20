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
#include "widget.h"
int Widget::ID_CURRENT=1;
Widget::Widget(WidgetType type) {
	wType=type;
	wID=ID_CURRENT++;
	generateModelName();
}

Widget::Widget(const Widget &rhs) {
	wType=rhs.wType;
	wID=ID_CURRENT++;
	generateModelName();
}

void Widget::generateModelName() {
	stringstream model;
	model << WIDGET_NAMES[wType] << " " << wID << " " << this;
	wModelName=model.str();
}
