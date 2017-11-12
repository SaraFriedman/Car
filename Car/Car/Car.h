#pragma once
class Car
{
private:
	char m_Company[10];
	char m_Model[10];
	unsigned int m_Year;
	unsigned int m_Volume;
	char m_Color[10];

public:
	Car(char* _company, char* _model, unsigned int _year, unsigned int _volume, char* _colo);
	~Car();
	char* GetCompany();
	void SetCompany(char*);
	char* GetModel();
	void SetModel(char*);
	unsigned int GetYear();
	void SetYear(unsigned int);
	unsigned int GetVolume();
	void SetVolume(unsigned int);
	char* GetColor();
	void SetColor(char*);
	void Print();
	static Car& CompareByYear(Car& c1, Car& c2);
	static Car& CompareByVolume(Car& c1, Car& c2);
};

