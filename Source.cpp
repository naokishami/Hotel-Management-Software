#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;

#include "hotel.h"

int main() {

	GuestProfile g;
	g.first_name = "Bob";
	g.last_name = "Smith";
	g.address = "12345 Sample St.";
	g.license_plate = "7459KF";
	g.email = "test@email.com";
	g.id_no = "8563895YN";
	g.state = "California";
	g.phone_no = "555-555-5555";

	Reservation r1, r2, r3;
	std::vector<Reservation> rvec;
	r1.amt_paid = 100;
	r2.amt_paid = 200;
	r1.guest = g;
	r2.guest.last_name = "last2";
	r1.room_number = 302;
	r2.room_number = 303;
	r1.check_in.year = 2020;
	r1.check_in.day = 31;
	r1.check_in.month = 3;
	r2.check_in.year = 2020;
	r2.check_in.day = 31;
	r2.check_in.month = 4;
	r1.check_out.year = 2020;
	r1.check_out.month = 4;
	r1.check_out.day = 3;

	r1.check_in_time = "5:00PM";
	r1.check_out_time = "11:00AM";
	r1.room_rate = 34.56;
	r1.room_type = "K";
	r1.total_charge = 45.67;
	r1.payments_made = "Credit";
	r1.balance = 0;

	rvec.push_back(r1);
	rvec.push_back(r2);
	rvec.push_back(r3);

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
			ShowProfile(g);
		}
		if (select == 6) {
			currentStayScreen(r1);
		}
		if (select == 7) {
			h.searchScreen();
		}
		if (select == 8) {
			ShowReport(rvec);
		}
		if (select == 9) {
			break;
		}

	} while (select !=9);



	system("PAUSE");
	return 0;
}
