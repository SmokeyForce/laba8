#pragma once
using namespace System;
using namespace System::IO;
public ref class Devices
{
public:
	String^ brand;
	String^ model;
	int price;
public:
	Devices();
	Devices(String^, String^, int);
	virtual ~Devices();
	void setInfo(String^ _brand);
	void setInfo(String^ _brand, String^ _model, int _price);
	String^ getFullName();
};

