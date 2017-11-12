#include <iostream>
#include "Car.h"
#include <string.h>
using namespace std;

void main()
{
	char *maker = new char[10], *model = new char[10], *color = new char[10];
	unsigned int year = 0, volume = 0;
	cout << "Enter first car details: maker, model, year, volume, color" << endl;
	cin >> maker >> model >> year >> volume >> color;
	Car first(maker, model, year, volume, color);
	cout << "Enter second car details: maker, model, year, volume, color" << endl;
	cin >> maker >> model >> year >> volume >> color;
	Car second(maker, model, year, volume, color);
	Car greater = Car::CompareByVolume(first, second);
	greater.Print();
	greater = Car::CompareByYear(first, second);
	greater.Print();
}