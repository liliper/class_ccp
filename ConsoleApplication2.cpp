#include <iostream>
using namespace std;

class Rectagle
{
public:

	Rectagle(){}

	Rectagle(float valueA, float valueB , float valueCOEF)
	{
		a = valueA;
		b = valueB;
		coef = valueCOEF;
	}

	~Rectagle(){}

private:

	float a;
	float b;
	float a1;
	float b1;
	float coef;

public:

	float perimeter;
	float perimeter2;
	float space;
	float space2;

	void FD()
	{
		a1 = a * coef;
		b1 = b * coef;
	}

	float GetB()
	{
		return b;
	}
	
	void SetB(float valueB)
	{
		b = valueB;
	}

	void Perimeter()
	{
		perimeter = 2 * (a + b);
		perimeter2 = 2 * (a1 + b1);
	}

	void Space()
	{
		space = a * b;
		space2 = a1 * b1;
	}

	void Print()
	{
		cout << "Длина = " << a << "\n Ширина = " << b << "\n Периметр = " << perimeter << "\n Площадь = " << space << "\n";
	}

	void PrintSimilar()
	{
		cout << "Длина = " << a1 << "\n Ширина = "<< b1<< "\n Периметр = " << perimeter2 << "\n Площадь = " << space2 << "\n";
	}

};

int main()
{
	setlocale(LC_ALL, "ru");

	Rectagle FirstRectagle(3, 4, 2);

	FirstRectagle.GetB();
	FirstRectagle.SetB(5);
	FirstRectagle.FD();
	FirstRectagle.Perimeter();
	FirstRectagle.Space();
	FirstRectagle.Print();

	cout << "Подобный этому прямоугольнику будет: \n";

	FirstRectagle.PrintSimilar();
}