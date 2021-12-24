#pragma once
using namespace System;
using namespace System::IO;
#include "Monitor.h"
ref class Monitor;
public ref class SystemUnit
{
public:
	String^ brand;
	String^ model;
	int price;
	SystemUnit();	
	~SystemUnit();
	SystemUnit(String^ _brand, String^ _model, int _price, String^ _colour, String^ _size, String^ _motherboard, String^ _cpu, int _ram);
	void setUnitInfo(String^ _brand);
	void setUnitInfo(String^ _brand, String^ _model, int _price, String^ _colour, String^ _size);
	void setComponents(String^ _motherboard);
	void setComponents(String^ _motherboard, String^ _cpu, int _ram);
	void writeToFile(StreamWriter^ sw);
	void readFromFile(StreamReader^ sr);
	String^ getUnitName();
	void connectMonitor(Monitor^ monitor);
	static int count = 0;

public:
	String^ colour;
	String^ cpu;
	String^ size;
	String^ motherboard;
	int ram;
};
// class driver, set driver
