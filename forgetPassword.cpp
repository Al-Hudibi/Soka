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
struct forgetPassword
{
	string username;
	string password;
	forgetPassword(string u, string p)
		: username(u), password(p) {}
};


int main()
{
	student s1("John Doe", 20, 3.5);
	cout << "Name: " << s1.name << ", Age: " << s1.age << ", GPA: " << s1.gpa << endl;
	return 0;
}