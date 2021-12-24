#include "SystemUnit.h"
using namespace System;
using namespace System::IO;
SystemUnit::SystemUnit() :brand("Papucious"), model("Vinnytsya"), price(100), size("Mid-Tower"), motherboard("asusgromyako"), cpu("intelcorei14.1"), ram(32)
{
	count++;
}
SystemUnit::~SystemUnit()
{
}
SystemUnit::SystemUnit(String^ _brand, String^ _model, int _price, String^ _colour, String^ _size, String^ _motherboard, String^ _cpu, int _ram) :
	brand(_brand), model(_model), price(_price), colour(_colour), size(_size), motherboard(_motherboard), cpu(_cpu), ram(_ram)
{
}
void SystemUnit::setUnitInfo(String^ _brand)
{
	brand = _brand;
}
void SystemUnit::setUnitInfo(String^ _brand, String^ _model, int _price, String^ _colour, String^ _size)
{
	brand = _brand;
	model = _model;
	price = _price;
	colour = _colour;
	size = _size;
}
void SystemUnit::setComponents(String^ _motherboard)
{
	motherboard = _motherboard;
}
void SystemUnit::setComponents(String^ _motherboard, String^ _cpu, int _ram)
{
	motherboard = _motherboard;
	cpu = _cpu;
	ram = _ram;
}
void SystemUnit::readFromFile(StreamReader^ sr)
{
	this->brand = sr->ReadLine();
	this->model = sr->ReadLine();
	this->price = int::Parse(sr->ReadLine());
	this->colour = sr->ReadLine();
	this->size = sr->ReadLine();
	this->motherboard = sr->ReadLine();
	this->cpu = sr->ReadLine();
	this->ram = int::Parse(sr->ReadLine());
}
void SystemUnit::writeToFile(StreamWriter^ sw)
{
	sw->WriteLine(brand);
	sw->WriteLine(model);
	sw->WriteLine(price);
	sw->WriteLine(colour);
	sw->WriteLine(size);
	sw->WriteLine(motherboard);
	sw->WriteLine(cpu);
	sw->WriteLine(ram);
}
String^ SystemUnit::getUnitName()
{
	return this->brand + " " + this->model;
}
void SystemUnit::connectMonitor(Monitor^ monitor)
{
}
