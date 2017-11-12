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

const char * Car::GetCompany() const
{
	return m_Company;
}

void Car::SetCompany(char * _company)
{
	assert(strlen(_company) <= 10, "company name too long");
	strncpy_s(m_Company, _company, 10);
}

const char * Car::GetModel() const
{
	return m_Model;
}

void Car::SetModel(char * _model)
{
	assert(strlen(_model) <= 10, "model name too long");
	strncpy_s(m_Model, _model, 10);
}

const unsigned int Car::GetYear() const
{
	return m_Year;
}

void Car::SetYear(unsigned int _year)
{
	assert(_year >= 1970 && _year <= 2017);
	m_Year = _year;
}

const unsigned int Car::GetVolume() const
{
	return m_Volume;
}

void Car::SetVolume(unsigned int _volume)
{
	m_Volume = _volume;
}

const char * Car::GetColor() const
{
	return m_Color;
}

void Car::SetColor(char * _color)
{
	assert(strlen(_color) <= 10, "color too long");
	strncpy_s(m_Color, _color, 10);
}

void Car::Print() const
{
	cout << "Company: " << m_Company << endl
		<< "Model: " << m_Model << endl
		<< "Color: " << m_Color << endl
		<< "Volume: " << m_Volume << endl
		<< "Year: " << m_Year << endl;
}

const Car & Car::CompareByYear(const Car & c1, const Car & c2) 
{
	return c1.GetYear() > c2.GetYear() ? c1 : c2;
}

const Car & Car::CompareByVolume(const Car & c1, const Car & c2)
{
	return c1.GetVolume() > c2.GetVolume() ? c1 : c2;
}
