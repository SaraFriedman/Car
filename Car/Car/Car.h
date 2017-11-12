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
	const char* GetCompany() const;
	void SetCompany(char*);
	const char* GetModel() const;
	void SetModel(char*);
	const unsigned int GetYear() const;
	void SetYear(unsigned int);
	const unsigned int GetVolume() const;
	void SetVolume(unsigned int);
	const char* GetColor() const;
	void SetColor(char*);
	void Print() const;
	const static Car& CompareByYear(const Car& c1, const Car& c2);
	const static Car& CompareByVolume(const Car& c1, const Car& c2);
};

