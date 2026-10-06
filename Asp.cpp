#include <iostream>
using namespace std;

struct stUser
{
	string username;
	string password;
	stUser(string user, string pass)
		: username(user), password(pass) {}
};

int main()
{ 
	cout << "Enter username: ";
	string user;
	cin >> user;
	cout << "Enter password: ";
	string pass;
	cin >> pass;
	stUser user1(user, pass);
	cout << "Username: " << user1.username << endl;
	cout << "Password: " << user1.password << endl;
	return 0;
	
}