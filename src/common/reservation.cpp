#include "reservation.h"

#include <iostream>

Reservation::Reservation(){
	guest = GuestProfile();
	room_number = -1;
	check_in = Date();
	check_out = Date();
	amt_paid = -1;
	check_in_time = "Not set";
	check_out_time = "Not set";
	room_rate = -1;
	room_type = "Not set";
	total_charge = -1;
	payments_made = "Not set";
	balance = -1;
}

Reservation::Reservation(GuestProfile* guestprofile, int roomNum, Date checkIn, Date checkOut,
				double amtPaid = 0, std::string checkInTime = "Not set", 
				std::string checkOutTime = "Not set", float roomRate = 0,
				std::string roomType = "Not set", float totalCharge = 0,
				std::string paymentsMade = "Not set", float bal = 0) {
	guest = *guestprofile;
	room_number = roomNum;
	check_in = checkIn;
	check_out = checkOut;
	amt_paid = amtPaid;
	check_in_time = checkInTime;
	check_out_time = checkOutTime;
	room_rate = roomRate;
	room_type = roomType;
	total_charge = totalCharge;
	payments_made = paymentsMade;
	balance = bal;
}

void Reservation::create_new_reservation(int roomNumber_, Date date) {
	room_number = roomNumber_;
	check_in = date;

	std::cout << "Room number : " << roomNumber_ << std::endl;
	std::cout << "Check in date : ";
	date.print_date();
	std::cout << "Check out date : ";
	check_out.create_new_date();
	std::cout << "Amount paid : ";
	std::cin >> amt_paid;
	std::cout << "Check in time : ";
	std::cin >> check_in_time;
	std::cout << "Check out time : ";
	std::cin >> check_out_time;
	std::cout << "Room rate : ";
	std::cin >> room_rate;
	std::cout << "Room type : ";
	std::cin >> room_type;
	std::cout << "Total charge : ";
	std::cin >> total_charge;
	std::cout << "Payments made : ";
	std::cin >> payments_made;
	std::cout << "Balance : ";
	std::cin >> balance;
}


void Reservation::create_new_reservation() {
	std::cout << "Room number : ";
	std::cin >> room_number;
	std::cout << "Check in date : ";
	check_in.create_new_date();
	std::cout << "Check out date : ";
	check_out.create_new_date();
	std::cout << "Amount paid : ";
	std::cin >> amt_paid;
	std::cout << "Check in time : ";
	std::cin >> check_in_time;
	std::cout << "Check out time : ";
	std::cin >> check_in_time;
	std::cout << "Room rate : ";
	std::cin >> room_rate;
	std::cout << "Room type : ";
	std::cin >> room_type;
	std::cout << "Total charge : ";
	std::cin >> total_charge;
	std::cout << "Payments made : ";
	std::cin >> payments_made;
	std::cout << "Balance : ";
	std::cin >> balance;
}

void Reservation::add_guest(GuestProfile* _guest) {
	guest = *_guest;
}

void Reservation::print_reservation() {
	guest.print_guest();

	std::cout << "\nPrinting reservation details..." << std::endl << std::endl;

	std::cout << "Room number : \t\t\t" << room_number << std::endl;
	std::cout << "Check in date...\t\t";
	check_in.print_date();
	std::cout << "Check out date...\t\t";
	check_out.print_date();
	std::cout << "Amount paid : \t\t\t" << amt_paid << std::endl;
	std::cout << "Check in time : \t\t" << check_in_time << std::endl;
	std::cout << "Check out time : \t\t" << check_out_time << std::endl;
	std::cout << "Room rate : \t\t\t" << room_rate << std::endl;
	std::cout << "Room type : \t\t\t" << room_type << std::endl;
	std::cout << "Total charge : \t\t\t" << total_charge << std::endl;
	std::cout << "Payments made : \t\t" << payments_made << std::endl;
	std::cout << "Balance : \t\t\t" << balance << std::endl;
}

void Reservation::change_reservation(std::string choice) {
	if (choice == "room number") {
		std::cout << "What is the new room number? ";
		std::cin >> room_number;
	}
	if (choice == "check in date") {
		check_in.change_date();
	}
	if (choice == "check out date") {
		check_out.change_date();
	}
	if (choice == "amount paid") {
		std::cout << "What is the new amount paid? ";
		std::cin >> amt_paid;
	}
	if (choice == "check in time") {
		std::cout << "What is the new check in time? ";
		std::cin >> check_in_time;
	}
	if (choice == "check out time") {
		std::cout << "What is the new check out time? ";
		std::cin >> check_out_time;
	}
	if (choice == "room rate") {
		std::cout << "What is the new room rate? ";
		std::cin >> room_rate;
	}
	if (choice == "room type") {
		std::cout << "What is the new room type? ";
		std::cin >> room_type;
	}
	if (choice == "total charge") {
		std::cout << "What is the new total charge? ";
		std::cin >> total_charge;
	}
	if (choice == "payments made") {
		std::cout << "What is the new payments made? ";
		std::cin >> payments_made;
	}
	if (choice == "balance") {
		std::cout << "What is the new balance? ";
		std::cin >> balance;
	}
}

// std::ostream& operator<<(std::ostream& os, const Reservation& res) {
// 	os << "\nPrinting reservation details..." << std::endl;

// 	os << res.guest; 
// 	os << "Room number : \t\t\t" << res.room_number << std::endl;
// 	os << "Check in date...\t\t";
// 	os << res.check_in;
// 	os << "Check out date...\t\t";
// 	os << res.check_out;
// 	os << "Amount paid : \t\t\t" << res.amt_paid << std::endl;
// 	os << "Check in time : \t\t" << res.check_in_time << std::endl;
// 	os << "Check out time : \t\t" << res.check_out_time << std::endl;
// 	os << "Room rate : \t\t\t" << res.room_rate << std::endl;
// 	os << "Room type : \t\t\t" << res.room_type << std::endl;
// 	os << "Total charge : \t\t\t" << res.total_charge << std::endl;
// 	os << "Payments made : \t\t" << res.payments_made << std::endl;
// 	os << "Balance : \t\t\t" << res.balance << std::endl; 

// 	return os;
// }