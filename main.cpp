#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	float gpa;
	student(string n, int a, float g)
		: name(n), age(a), gpa(g) {}
};


enum enLicense{
	None = 0,
	A = 1,
	B = 2,
	C = 3,
	D = 4,
	E = 5
};


int main()
{
	cout << "Hello World! \n";
	return 0;
}