#pragma once
using namespace System;
using namespace System::IO;
#include "Monitor.h"
#include "SystemUnit.h"
ref class Monitor;
ref class SystemUnit;
public ref class Driver
{
public:
	Driver();
	String^ name;
	String^ date;
	void setDriver(Monitor^ monitor, SystemUnit^ unit);
	void setDriverInfo(String^ _name, String^ _date);
	void instalDriver(String^ _name);
};

