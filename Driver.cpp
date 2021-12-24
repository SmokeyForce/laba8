#include "Driver.h"
using namespace System;
void Driver::setDriver(Monitor^ monitor, SystemUnit^ unit)
{
	unit->connectMonitor(monitor);
}
Driver::Driver() : name("driver"), date("11.11.11")
{
}
void Driver::instalDriver(String^ _name)
{
	String^ s = "This driver " + this->name + " is installed";	
}
void Driver::setDriverInfo(String^ _name, String^ _date)
{
	name = _name;
	date = _date;
}