#include <iostream>

using namespace std;
enum enStatus
{
	Active,
	Inactive,
	Banned
};
enum enRole
{
	Admin,
	User,
	Guest
};

int main()
{
	enStatus status = Active;
	enRole role = User;
	cout << "Status: " << status << ", Role: " << role << endl;
	return 0;
}