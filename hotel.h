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


class GuestProfile {
public:
	std::string first_name = "";
	std::string last_name = "";
	std::string address = "";
	std::string license_plate = "";
	std::string email = "";
	std::string id_no = "";
	std::string state = "";
	std::string phone_no = "";

public:
	std::string GetFirstName() {
		return first_name;
	}
	std::string GetLastName() {
		return last_name;
	}
	std::string GetAddress() {
		return address;
	}
	std::string GetLicense() {
		return license_plate;
	}
	std::string GetEmail() {
		return email;
	}
	std::string GetID() {
		return id_no;
	}
	std::string GetState() {
		return state;
	}
	std::string GetPhoneNo() {
		return phone_no;
	}

	void SetFirstName(std::string f) {
		first_name = f;
	}
	void SetLastName(std::string l) {
		last_name = l;
	}
	void SetAddress(std::string a) {
		address = a;
	}
	void SetLicense(std::string l) {
		license_plate = l;
	}
	void SetEmail(std::string e) {
		email = e;
	}
	void SetID(std::string i) {
		id_no = i;
	}
	void SetState(std::string s) {
		state = s;
	}
	void SetPhoneNo(std::string p) {
		phone_no = p;
	}
};

class Date {
public:
	int year = -1;
	int month = -1;
	int day = -1;

public:
	int GetYear() {
		return year;
	}
	int GetMonth() {
		return month;
	}
	int GetDay() {
		return day;
	}

	void SetYear(int y) {
		year = y;
	}
	void SetMonth(int m) {
		month = m;
	}
	void SetDay(int d) {
		day = d;
	}
};

class Reservation {
public:
	GuestProfile guest;
	int room_number;
	Date check_in;
	Date check_out;
	double amt_paid;
};