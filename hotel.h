#pragma once
#include <string>

class hotel {
	int roomNumber;
	char name[50];
	char address[50];
	char phone[20];
	bool housekeeping;

public:
	void roomStatus();
	void roomList();
	void Reservations();
	void houseKeeping();
	void search(std::string generic);
	void searchScreen();
	void currentStayScreen();

};

struct guest {
	std::string f_name;
	std::string l_name;
	std::string check_in_date;
	std::string check_in_time;
	std::string check_out_date;
	std::string check_out_time;
	std::string room_type;
	int room_num;
	float room_rate;
	float total_charge;
	std::string payments_made;
	float balance;
};
//gg[20];

struct housekeeping {
	std::string Roomnumber;
	std::string HousekeepName;
	std::string Type;
	std::string Status;
	bool BathroomTowels;
	bool BedSheets;
	bool Vacuum;
	bool Dusting;
	bool Electronics;

};
//hk[20];

struct reservation
{
	std::string DateMade;
	std::string DateCheckin;
	std::string DateCheckout;
	std::string RoomType;
	std::string WebsiteReservationMade;
	double Rate;
	double TotalCharge;
};
//res[20];