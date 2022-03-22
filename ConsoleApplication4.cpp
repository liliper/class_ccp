#include <iostream>
using namespace std;

class Animals
{
public:

	Animals(const char* valueGender, const char* valueColor, float valueWeight, int valueAge)
	{
		gender = valueGender;
		color = valueColor;
		weight = valueWeight;
		age = valueAge;

	}

	~Animals(){}

protected:
	
	const char* gender;
	const char* color;
	float weight;
	int age;

};

class Population : public Animals
{
public:

	Population(const char* valueGender, const char* valueColor, float valueWeight, int valueAge, const char* valueName, float valuePpl) : Animals(valueGender, valueColor, valueWeight, valueAge)
	{

		name = valueName;
		ppl = valuePpl;

	}

	~Population() {}

private:

	const char* name;
	float ppl;

public:

	float GetWeight()
	{
		return weight;
	}

	void SetWeight(float valueWeight)
	{
		weight = valueWeight;
	}

	void Print()
	{
		cout << "Название:" << name << "\n Пол:" << gender << "\n Возраст:" << age << "\n Вес:" << weight << "\n Окрас:" << color << "\n Количество:" << ppl << " тысяч" << endl;
	}

	Population& operator --();
};

Population& Population::operator --()
{
	ppl -= 12;
	return *this;
}

int main()
{

	setlocale(LC_ALL, "ru");

	Population Lion("Мужской", "Желтая", 56, 12, "Лев", 32);

	--Lion;

	Lion.GetWeight();
	Lion.SetWeight(46);
	Lion.Print();

	Population Tigr("Мужской", "Оранжевочерный", 34, 15, "Тигр", 43);

	--Tigr;

	Tigr.GetWeight();
	Tigr.SetWeight(46);
	Tigr.Print();

}
