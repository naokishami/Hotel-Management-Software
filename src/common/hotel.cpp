#include "hotel.h"

Hotel::Hotel() {
	// loop through all the rooms
	for (int i = 1; i <= 20; i++) {
		// loop through 7 days
		for (int j = 1; j <= 7; j++) {
			// loop through all 140 rooms for the total 7 days
			for (int k = 1; k <= 140; k++) {
				hotel_rooms[k].roomNum = i;
				hotel_rooms[k].day.SetDay(j);
				hotel_rooms[k].status = "Available";
			}
		}
	}
}

// std::string Hotel::search_for_guest(GuestProfile* _guest) {
// 	auto iter = hotel_reservations.begin();
	
// 	for ( ; iter != hotel_reservations.end(); iter++) {
// 		if ((*iter).guest == *_guest) {
// 			return "Guest found!";	
// 		}
// 	}
// 	return "Guest not found";
// }

void Hotel::add_reservation(Reservation* resv) {
	hotel_reservations.push_back(*resv);
}

void Hotel::add_reservation(std::shared_ptr<Reservation> resv) {
	hotel_reservations.push_back(*resv);
}
		
void Hotel::change_room_status(int roomNum, Date date, std::string change_to_status) {
	hotel_rooms[roomNum * date.day].status = change_to_status;
}

std::string Hotel::getRoomStatus(int roomNum, Date lookUpDate) {
	return hotel_rooms[roomNum * lookUpDate.day].status;
}

