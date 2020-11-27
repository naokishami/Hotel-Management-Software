#include "hotel.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void hotel::roomStatus() {
	system("CLS");
	string status;
	cout << "Types of rooms and abbreviations: \n";
	cout << " King: K\n Double Queen: DQ\n Double Queen with Kitchen: DQK\n Suite: S\n\n";
	cout << "\n\t\tList of rooms and statuses";
	cout << "\n\t\t--------------------------\n";
	while (roomNumber <= 20) {
		for (int i = 1; i <= 5; i++) {
			cout << "Room Number: " << i << "\t\tType: K " << setw(5) << "\t Status: " << status << endl;
		}
		for (int i = 6; i <= 10; i++) {
			cout << "Room Number: " << i << "\t\tType: DQ\t Status: "<< status << endl;
		}
		for (int i = 11; i <= 15; i++) {
			cout << "Room Number: " << i << "\t\tType: DQK\t Status: " << status << endl;
		}
		for (int i = 16; i <= 20; i++) {
			cout << "Room Number: " << i << "\t\tType: S " << setw(5) << "\t Status: " << status << endl;
		}
		break;
	}
	system("PAUSE");
}