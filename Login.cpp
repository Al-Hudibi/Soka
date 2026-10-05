#include <iostream>
using namespace std;

struct stUser
{
	string username;
	string password;
	stUser(string user, string pass)
		: username(user), password(pass) {}
};