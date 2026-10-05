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
	forgetPassword fp("john_doe", "secret123");
	cout << "Username: " << fp.username << ", Password: " << fp.password << endl;
	return 0;
}