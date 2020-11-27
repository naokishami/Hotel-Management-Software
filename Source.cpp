#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;

#include "hotel.h"

int main() {
	hotel h;
	int select;
	do {
		system("CLS");
		cout << endl<<"-----------Welcome to the HotelX management software!---------" << endl << endl;
		cout << "\t1: Room Status" << endl;
		cout << "\t2: Room List" << endl;
		cout << "\t3: Reservations" << endl;
		cout << "\t4: Housekeeping" << endl;
		cout << "\t5: Guest Profile" << endl;
		cout << "\t6: Guest Current Stay" << endl;
		cout << "\t7: Guest Search" << endl;
		cout << "\t8: Daily report" << endl;
		cout << "\t9: Exit"<< endl;//or any other value
		cout << "Enter the number of the option you would like to use: ";
		cin >> select;
		if (select == 1) {
			h.roomStatus();
		}
	    if (select == 2) {
			h.roomList();
		}
		if (select == 3) {
			h.Reservations();
		}
		if (select == 4) {
			h.houseKeeping();
		}
		if (select == 5) {

		}
		if (select == 6) {
			h.currentStayScreen();
		}
		if (select == 7) {
			h.searchScreen();
		}
		if (select == 8) {

		}
		if (select == 9) {
			break;
		}

	} while (select !=9);



	system("PAUSE");
	return 0;
}
