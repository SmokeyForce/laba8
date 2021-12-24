#pragma once
using namespace System;
using namespace System::IO;
#include "Devices.h"
using namespace std;
public ref class Monitor : public Devices
{
public:	
	int price;
	void setInfo(String^ _brand);
	void setInfo(String^ _brand, String^ _model, int _price);
	void setResolution(int _inch);
	void setOtherInfo(int _hhz);
	void readFromFile(StreamReader^ sr);
	void writeToFile(StreamWriter^ sw);
	Monitor();
	Monitor(String^, String^);
public:
	int hhz;
	int inch;
};

