#include <iostream>
using namespace std;

class Abstract
{
public:
	virtual void print() = 0;
};

class Transport : public Abstract
{
protected:
	const char* mark;
	int number;
	float speed;
	float capacity;
public:
	Transport(const char* valueMark, float valueSpeed, float valueCapacity, int valueNumber)
	{
		mark = valueMark;
		speed = valueSpeed;
		capacity = valueCapacity;
		number = valueNumber;
	}

	~Transport() {};
};

class Car : public Transport
{
public:
	Car(const char* valueMark, float valueSpeed, float valueCapacity, int valueNumber) : Transport(valueMark, valueSpeed, valueCapacity, valueNumber) {};
	~Car() {};

	void print() override
	{
		cout << "This's car. Mark is " << mark << ". Number: " << number << ". Max speed = " << speed << ". Max capacity = " << capacity << endl;
 	}
};

class Moto : public Transport
{
private:
	int sidecar;
public:
	Moto(const char* valueMark, float valueSpeed, float valueCapacity, int valueNumber, int valueSidecar) : Transport(valueMark, valueSpeed, valueCapacity, valueNumber)
	{
		sidecar = valueSidecar;
	}
	~Moto() {};

	int GetSidecar()
	{
		return sidecar;
	}
	void SetSidecar(int valueSidecar)
	{
		sidecar = valueSidecar;
	}
	void Sidecar()
	{
		if (sidecar == 0)
		{
			capacity = 0;
		}
	}
	void print() override
	{
		cout << "This's motobike. Mark is " << mark << ". Number: " << number << ". Max speed = " << speed << ". Number is sidecar: " << sidecar << ". Max capacity = " << capacity << endl;
	}
};

class Truck : public Transport
{
private:
	int trailer;
public:
	Truck(const char* valueMark, float valueSpeed, float valueCapacity, int valueNumber, int valueTrailer) : Transport(valueMark, valueSpeed, valueCapacity, valueNumber)
	{
		trailer = valueTrailer;
	}
	~Truck() {};

	int GetTrailer()
	{
		return trailer;
	}

	void SetTrailer(int valueTrailer)
	{
		trailer = valueTrailer;
	}

	void  Trailer()
	{
		if (trailer == 1)
		{
			capacity = capacity * 2;
		}
		if (trailer == 2)
		{
			capacity = capacity * 3;
		}
	}

	void print() override
	{
		cout << "This's truck. Mark is " << mark << ". Number: " << number << ". Max speed = " << speed << ". Number is trailer: " << trailer << ". Max capacity = " << capacity << endl;
	}
};

int main()
{
	Car Toyota("toyota", 304, 200, 1);
	Toyota.print();

	Moto Hyinday("hyinday", 250, 100, 2, 1);
	Hyinday.GetSidecar();
	Hyinday.SetSidecar(0);
	Hyinday.Sidecar();
	Hyinday.print();

	Truck Scania("scania", 130, 1000, 3, 1);
	Scania.GetTrailer();
	Scania.SetTrailer(0);
	Scania.Trailer();
	Scania.print();
}