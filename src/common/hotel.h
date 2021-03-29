#pragma once

#include "reservation.h"

#include <vector>
#include <string>

// #include "guest_profile.h"
// #include "date.h"

class Room {
public:
	int roomNum;
	std::string status;
	Date day;
};

class Hotel {
public:
	std::vector<Reservation> hotel_reservations;
	// this will be created so that we can keep track of the room status
	// for a particular day
	Room hotel_rooms[140];

	// map<GuestProfile, Reservation> booking_log;

public:
	Hotel();

	// void create_new_log(GuestProfile guest, Reservation res) {
	// 	booking_log.insert(pair<GuestProfile, Reservation>(guest, res));
	// }

	// std::string search_for_guest(GuestProfile* _guest);

	void search_by_pair(std::string value, std::string member);

	void add_reservation(Reservation* resv);

	void add_reservation(std::shared_ptr<Reservation> resv);

	void change_room_status(int roomNum, Date date, std::string change_to_status); 

	std::string getRoomStatus(int roomNum, Date lookUpDate);

};

std::string currentStayScreen(GuestProfile* guest, Reservation* reservation, int roomNum, Date date, std::shared_ptr<Hotel> the_hotel);
// std::string currentStayScreen(std::shared_ptr<GuestProfile> shared_guest_ptr, std::shared_ptr<Reservation> shared_res_ptr, int roomNum, std::shared_ptr<Hotel> the_hotel);
int ShowProfile(GuestProfile profile);
int ShowReport(std::vector<Reservation> reservation_list);
GuestProfile searchScreen(std::shared_ptr<Hotel> the_hotel);
