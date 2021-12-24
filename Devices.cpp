#include "Devices.h"
using namespace System;
using namespace System::IO;
Devices::Devices() : Devices("Brand", "Model", 100) {
}
Devices::~Devices() {
}
Devices::Devices(String^ _brand, String^ _model, int _price) {
}
void Devices::setInfo(String^ _brand) {
	brand = _brand;
}
void Devices::setInfo(String^ _brand, String^ _model, int _price) {
	brand = _brand;
	model = _model;
	price = _price;
}
String^ Devices::getFullName() {
	return this->brand + " " + this->model;
}