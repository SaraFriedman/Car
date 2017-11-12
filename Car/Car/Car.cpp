#include "Car.h"
#include <assert.h>
#include<string.h>
#include <iostream>
using namespace std;

Car::Car(char* _company, char* _model, unsigned int _year, unsigned int _volume, char* _color)
{
	assert(strlen(_company) <= 10, "company name too long");
	assert(strlen(_model) <= 10, "model name too long");
	assert(strlen(_color) <= 10, "color too long");
	assert(_year >= 1970 && _year <= 2017);
	strncpy_s(m_Company, _company, 10);
	strncpy_s(m_Model, _model, 10);
	m_Year = _year;
	m_Volume = _volume;
	strncpy_s(m_Color, _color, 10);
}


Car::~Car()
{
}

char * Car::GetCompany()
{
	return m_Company;
}

void Car::SetCompany(char * _company)
{
	assert(strlen(_company) <= 10, "company name too long");
	strncpy_s(m_Company, _company, 10);
}

char * Car::GetModel()
{
	return m_Model;
}

void Car::SetModel(char * _model)
{
	assert(strlen(_model) <= 10, "model name too long");
	strncpy_s(m_Model, _model, 10);
}

unsigned int Car::GetYear()
{
	return m_Year;
}

void Car::SetYear(unsigned int _year)
{
	assert(_year >= 1970 && _year <= 2017);
	m_Year = _year;
}

unsigned int Car::GetVolume()
{
	return m_Volume;
}

void Car::SetVolume(unsigned int _volume)
{
	m_Volume = _volume;
}

char * Car::GetColor()
{
	return m_Color;
}

void Car::SetColor(char * _color)
{
	assert(strlen(_color) <= 10, "color too long");
	strncpy_s(m_Color, _color, 10);
}

void Car::Print()
{
	cout << "Company: " << m_Company << endl
		<< "Model: " << m_Model << endl
		<< "Color: " << m_Color << endl
		<< "Volume: " << m_Volume << endl
		<< "Year: " << m_Year << endl;
}

Car & Car::CompareByYear(Car & c1, Car & c2)
{
	return c1.GetYear() > c2.GetYear() ? c1 : c2;
}

Car & Car::CompareByVolume(Car & c1, Car & c2)
{
	return c1.GetVolume() > c2.GetVolume() ? c1 : c2;
}
