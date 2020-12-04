#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <memory>
using namespace std;

#include "hotel.h"

int main() {

	// GuestProfile g;
	// g.first_name = "Bob";
	// g.last_name = "Smith";
	// g.address = "12345 Sample St.";
	// g.license_plate = "7459KF";
	// g.email = "test@email.com";
	// g.id_no = "8563895YN";
	// g.state = "California";
	// g.phone_no = "555-555-5555";

	// Reservation r1, r2, r3;
	// std::vector<Reservation> rvec;
	// r1.amt_paid = 100;
	// r2.amt_paid = 200;
	// r1.guest = g;
	// r2.guest.last_name = "last2";
	// r1.room_number = 302;
	// r2.room_number = 303;
	// r1.check_in.year = 2020;
	// r1.check_in.day = 31;
	// r1.check_in.month = 3;
	// r2.check_in.year = 2020;
	// r2.check_in.day = 31;
	// r2.check_in.month = 4;
	// r1.check_out.year = 2020;
	// r1.check_out.month = 4;
	// r1.check_out.day = 3;

	// r1.check_in_time = "5:00PM";
	// r1.check_out_time = "11:00AM";
	// r1.room_rate = 34.56;
	// r1.room_type = "K";
	// r1.total_charge = 45.67;
	// r1.payments_made = "Credit";
	// r1.balance = 0;

	// rvec.push_back(r1);
	// rvec.push_back(r2);
	// rvec.push_back(r3);

	// std::shared_ptr<Reservation> r_nullptr(nullptr);
	// std::shared_ptr<GuestProfile> g_nullptr(nullptr);

	Reservation* r_nullptr = nullptr;
	GuestProfile* g_nullptr = nullptr;
	Date date = Date(12, 1, 2020);

	hotel h;

	std::shared_ptr<Hotel> the_hotel = std::make_shared<Hotel>();

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
		// if (select == 5) {
		// 	ShowProfile(g);
		// }
		if (select == 6) {
			currentStayScreen(g_nullptr, r_nullptr, 42, date, the_hotel);
		}
		if (select == 7) {
			searchScreen();
		}
		// if (select == 8) {
		// 	ShowReport(rvec);
		// }
		if (select == 9) {
			break;
		}

	} while (select !=9);


	// system("PAUSE");
	// return 0;


	// Hotel my_hotel;

	// Date date = Date(12, 1, 2020);

	// cout << my_hotel.getRoomStatus(4, date) << endl;

	// my_hotel.change_room_status(4, date, "Unavailable");

	// cout << my_hotel.getRoomStatus(4, date) << endl;	


	// GuestProfile new_guest;
	// new_guest.create_new_profile();

	// cout << new_guest.GetFirstName() << endl;

	// return 0;

	// cout << "hotel constructed from Src" << endl;

	// my_hotel.add_empty_reservation();

	// cout << "guest name is : " << my_hotel.res[0].guest.GetFirstName() << endl;



	// GuestProfile Naoki;
	// Naoki.SetFirstName("Naoki");

	// Date NaokiCheckIn;
	// NaokiCheckIn.SetDay(24);
	// NaokiCheckIn.SetMonth(12);
	// NaokiCheckIn.SetYear(2020);

	// Date NaokiCheckOut;
	// NaokiCheckOut.SetDay(25);
	// NaokiCheckOut.SetMonth(12);
	// NaokiCheckOut.SetYear(2020);
	// Reservation testing = Reservation(Naoki, 23, NaokiCheckIn, NaokiCheckOut);
	// testing.check_in_time = "5:00PM";

	// my_hotel.add_reservation(testing);


	// cout << "Guest 1: " << my_hotel.res[1].guest.GetFirstName() << endl;

	// cout << "Guest 1: " << my_hotel.res[1].check_in_time << endl;


	// Date my_date = Date();
	// cout << "Year is : " << my_date.GetYear() << endl;

	// Reservation my_res = Reservation();
	// cout << "Guest name is : " << my_res.guest.first_name << endl;

	// cout << "First name is : " << my_hotel.res.guest.check_in_time << endl;
}
