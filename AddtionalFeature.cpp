#include <iostream>

using namespace std;

enum enPlatform {
	Windows,
	MacOS,
	Linux
};


enum enLicense {
	Free,
	Trial,
	Premium
};


enum enStatus {
	Active,
	Inactive,
	Suspended
};

int main() {
	enPlatform platform = Windows;
	enStatus status = Active;
	cout << "Platform: ";
	switch (platform) {
	case Windows:
		cout << "Windows" << endl;
		break;
	case MacOS:
		cout << "MacOS" << endl;
		break;
	case Linux:
		cout << "Linux" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}
	cout << "Status: ";
	switch (status) {
	case Active:
		cout << "Active" << endl;
		break;
	case Inactive:
		cout << "Inactive" << endl;
		break;
	case Suspended:
		cout << "Suspended" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}
	return 0;
}