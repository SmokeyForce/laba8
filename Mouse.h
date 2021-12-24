#pragma once
using namespace System;
using namespace System::IO;
#include "Devices.h"
public ref class Mouse : public Devices
{
	public :
	int numOfButtons;
	String^ backlight;
public:
	String^ colour;
	Mouse();
	Mouse(String^ _brand, String^ _model, int price, int numOfButtons, String^ backlight, String^ colour);
	virtual ~Mouse();
	void setMouseInfo(int _numOfButtons, String^ _colour, String^ _backlight);
	void readFromFile(StreamReader^ sr);
	void writeToFile(StreamWriter^ sw);
};

