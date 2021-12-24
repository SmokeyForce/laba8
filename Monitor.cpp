#include "Monitor.h"
using namespace System;
using namespace System::IO;
void Monitor::setInfo(String^ _brand)
{
	brand = _brand;
}
void Monitor::setInfo(String^ _brand, String^ _model, int _price)
{
	brand = _brand;
	model = _model;
	price = _price;
}
void Monitor::setResolution(int _inch)
{
	inch = _inch;
}

void Monitor::setOtherInfo(int _hhz)
{
	hhz = _hhz;
}
void Monitor::readFromFile(StreamReader^ sr)
{
	this->brand = sr->ReadLine();
	this->model = sr->ReadLine();
	this->price = int::Parse(sr->ReadLine());
	this->hhz = int::Parse(sr->ReadLine());
	this->inch = int::Parse(sr->ReadLine());
}
void Monitor::writeToFile(StreamWriter^ sw)
{
	sw->WriteLine(this->brand);
	sw->WriteLine(this->model);
	sw->WriteLine(this->price);
	sw->WriteLine(this->hhz);
	sw->WriteLine(this->inch);
}

Monitor::Monitor() : Monitor("Brand", "Model")
{
}
Monitor::Monitor(String^ _brand, String^ _model) {
	brand = _brand;
	model = _model;
}