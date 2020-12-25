#include <iostream>
#include <string>
using namespace std;
class vehicle 
{
protected:
	int wheels; 
	double weight; 
public:
	vehicle(int a,double b);
	void show();
};
vehicle::vehicle(int a, double b)
{
	wheels = a;
	weight = b;
}
void vehicle::show()
{
	cout << "��������" << wheels << endl;
	cout << "������" << weight << endl;
}
class car :private vehicle 
{
	int passenger_load;
public:
	car(int a, double b, int pa);
	void show();
};
car::car(int a, double b, int pa):vehicle(a,b)
{
	passenger_load = pa;
}
void car::show()
{
	cout << "С���ࣺ" << endl;
	vehicle::show();
	cout << "��������" << passenger_load << endl;
}
class truck :private vehicle 
{
	int passenger_load;
	double payload;
public:
	truck(int a, double b, int pa,double payload1);
	void show();
};
truck::truck(int a, double b, int pa, double payload1):vehicle(a, b)
{
	passenger_load = pa;
	payload = payload1;
}
void truck::show()
{
	cout << "�����ࣺ" << endl;
	vehicle::show();
	cout << "��������" << passenger_load << endl;
	cout << "��������" << payload << endl;
}

int main()
{
	car a(4, 100, 5);
	truck b(6, 500, 2, 300);

	a.show();
	cout << endl;
	b.show();

	system("PAUSE");
	return 0;
}