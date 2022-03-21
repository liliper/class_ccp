#include <iostream>
#include <string>
using namespace std;

class Enimals
{
public:

	Enimals() {};

	~Enimals() {};

protected:

	string name;
	string sex;
	float wt;
	string color;

public:

};

class Population : public Enimals
{
public:

	Population(){}

	Population(string valueName, string valueSex, float vakueWt, string valueColor)
	{
		name = valueName;
		sex = valueSex;
		wt = vakueWt;
		color = valueColor;
	}

	~Population() {}

private:
	
	float ppl;

public:
	
	float GetPPL()
	{
		return ppl;
	}

	void SetPPL(float valuePPL)
	{
		ppl = valuePPL;
	}
	void Print()
	{
		cout << "Имя:" << name << "\n Пол:" << sex << "\n Вес:" << wt << "\n Раскраска: " << color << "\n Популяция:" << ppl << "тысяч" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Population Lion("Лев", "Мужской", 30, "Желтый");
	Lion.GetPPL();
	Lion.SetPPL(12);
	Lion.Print();

	Population Zebra("Зебра", "Мужской", 14, "Черно-белый");
	Zebra.GetPPL();
	Zebra.SetPPL(30);
	Zebra.Print();
}