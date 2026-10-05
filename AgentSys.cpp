#include <iostream>

using namespace std;

struct stAgent {
	string name;
	int id;
	string department;
};

struct stAddress {
	string street;
	string city;
	string state;
	string zip;
};


int main() {
	stAgent agent1;
	agent1.name = "John Doe";
	agent1.id = 12345;
	agent1.department = "Sales";
	stAddress address1;
	address1.street = "123 Main St";
	address1.city = "Anytown";
	address1.state = "CA";
	address1.zip = "12345";
	cout << "Agent Name: " << agent1.name << endl;
	cout << "Agent ID: " << agent1.id << endl;
	cout << "Agent Department: " << agent1.department << endl;
	cout << "Address: " << address1.street << ", " << address1.city << ", "
		 << address1.state << " " << address1.zip << endl;
	return 0;
}