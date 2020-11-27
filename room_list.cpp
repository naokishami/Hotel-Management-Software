#include "hotel.h"
#include <iostream>
#include <iomanip>
using namespace std;

void hotel::roomList() {
	system("CLS");
	cout << "\t\t\tDay 1\t  Day 2\t\tDay 3\t  Day 4\t\tDay 5\t  Day 6\t\tDay 7\n";
	cout << "\t\t |---------|---------|---------|---------|---------|---------|---------|\n";
	//Guest will represent the guest variable for part two when we do the backend coding
	for (int i = 1; i <= 20; i++) {
		cout << "Room: " << setw(2) << i << setw(2) << " |" <</*setw(4) <<  Guest  <<*/ setw(10) << "|" << /*setw(4) <<  Guest <<*/ setw(10) << "    |" << /*setw(4) << Guest */ setw(10) << "   |" << /*setw(4) <<  Guest */ setw(10) << "   |" << /*setw(4) <<  Guest */ setw(10) << "   |" << /*setw(4) << Guest <<*/ setw(10) << "   |" << /*setw(4) << Guest <<*/ setw(10) << "   |" << endl;
		cout << "\t\t |---------|---------|---------|---------|---------|---------|---------|\n";
	}
	system("PAUSE");
}