#include "Mouse.h"
using namespace System;
using namespace System::IO;
Mouse::Mouse() : Mouse("A4Tech", "COC100",100,3,"None","Black") {

}
Mouse::~Mouse() {
}
Mouse::Mouse(String^ _brand, String^ _model, int _price, int _numOfButtons, String^ _backlight,String^ _colour):Devices(_brand,_model,_price) {
	numOfButtons = _numOfButtons;
	backlight = _backlight;
	colour = _colour;
}
void Mouse::setMouseInfo(int _numOfButtons, String^ _colour, String^ _backlight) {
	numOfButtons = _numOfButtons;
	colour = _colour;
	backlight = _backlight;
}
void Mouse::readFromFile(StreamReader^ sr)
{
	this->brand = sr->ReadLine();
	this->model = sr->ReadLine();
	this->price = int::Parse(sr->ReadLine());
	this->colour = sr->ReadLine();
}
void Mouse::writeToFile(StreamWriter^ sw)
{
	sw->WriteLine(brand);
	sw->WriteLine(model);
	sw->WriteLine(price);
	sw->WriteLine(colour);	
}