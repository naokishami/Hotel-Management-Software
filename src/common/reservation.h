#pragma once

#include "date.h"
#include "guest_profile.h"

#include <iostream>

class Reservation {
public:
	GuestProfile guest;
	int room_number;
	Date check_in;
	Date check_out;
	double amt_paid;

	// added some fields - Naoki
	std::string check_in_time;
	std::string check_out_time;

	float room_rate;
	std::string room_type;	

	float total_charge;
	std::string payments_made;
	float balance;

	Reservation();

	Reservation(GuestProfile* guestprofile, int roomNum, Date checkIn, Date checkOut,
				double amtPaid, std::string checkInTime, 
				std::string checkOutTime, float roomRate,
				std::string roomType, float totalCharge,
				std::string paymentsMade, float bal);

	void create_new_reservation(int roomNumber_, Date date); 

	void create_new_reservation();

	void add_guest(GuestProfile* _guest); 

	void print_reservation(); 

	void change_reservation(std::string choice);

	// friend std::ostream& operator<<(std::ostream& os, const Reservation& res);
};