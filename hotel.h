#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
private:
	std::string first_name = "";
	std::string last_name = "";
	std::string address = "";
	std::string license_plate = "";
	std::string email = "";
	std::string id_no = "";
	std::string state = "";
	std::string phone_no = "";

public:
	GuestProfile() {

	}

	void print_guest() {
		cout << "Printing guest details..." << endl << endl;

		cout << "First name : \t\t\t" << first_name << endl;
		cout << "Last name : \t\t\t" << last_name << endl;
		cout << "Address : \t\t\t" << address << endl;
		cout << "License plate : \t\t" << license_plate << endl;
		cout << "Email : \t\t\t" << email << endl;
		cout << "Id number : \t\t\t" << id_no << endl;
		cout << "State : \t\t\t" << state << endl;
		cout << "Phone number : \t\t\t" << phone_no << endl;
	}

	void create_new_profile() {
		cout << "Enter the following fields..." << endl;

		cout << "First name : ";
		cin >> first_name;
		cout << "Last name : ";
		cin >> last_name;
		cout << "Address : ";
		cin.ignore(1);
		getline(cin, address);
		cout << "License plate : ";
		cin >> license_plate;
		cout << "Email : ";
		cin >> email;
		cout << "Id number : ";
		cin >> id_no;
		cout << "State : ";
		cin >> state;
		cout << "Phone number : ";
		cin >> phone_no;
	}

	void change_profile(std::string choice) {
		if (choice == "first name") {
			cout << "What is the new first name? ";
			cin >> first_name;
		}
		else if (choice == "last name") {
			cout << "What is the new last name? ";
			cin >> last_name;
		}
		else if (choice == "address") {
			cout << "What is the new address? ";
			cin >> address;
		}
		else if (choice == "license plate") {
			cout << "What is the new license plate? ";
			cin >> license_plate;
		}
		else if (choice == "email") {
			cout << "What is the new email? ";
			cin >> email;
		}
		else if (choice == "id number") {
			cout << "What is the new id number? ";
			cin >> id_no;
		}
		else if (choice == "state") {
			cout << "What is the new state? ";
			cin >> state;
		}
		else if (choice == "phone number") {
			cout << "What is the new phone number? ";
			cin >> phone_no;
		}
		
	}

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
	int year = 2020;
	int month = 12;
	int day = -1;

public:
	Date(int _month, int _day, int _year) {
		day = _day;
		month = _month;
		year = _year;
	}
	Date() {};

	void change_date() {
		cout << "What is the new date? " << endl;
		cout << "Month: ";
		cin >> month;
		cout << "Day: ";
		cin >> day;
		cout << "Year: ";
		cin >> year;
	}

	void create_new_date() {
		cout << "Month : ";
		cin >> month;
		cout << "Day : ";
		cin >> day;
		cout << "Year : ";
		cin >> year;
	}

	void print_date() {
		cout << month << "/" << day << "/" << year << endl;
	}

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


	// added some fields - Naoki
	std::string check_in_time;
	std::string check_out_time;

	float room_rate;
	std::string room_type;	

	float total_charge;
	std::string payments_made;
	float balance;

	Reservation() {
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


	Reservation(GuestProfile* guestprofile, int roomNum, Date checkIn, Date checkOut,
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

	void create_new_reservation(int roomNumber_, Date date) {
		room_number = roomNumber_;
		check_in = date;

		cout << "Room number : " << roomNumber_ << endl;
		cout << "Check in date : ";
		date.print_date();
		cout << "Check out date : ";
		check_out.create_new_date();
		cout << "Amount paid : ";
		cin >> amt_paid;
		cout << "Check in time : ";
		cin >> check_in_time;
		cout << "Check out time : ";
		cin >> check_out_time;
		cout << "Room rate : ";
		cin >> room_rate;
		cout << "Room type : ";
		cin >> room_type;
		cout << "Total charge : ";
		cin >> total_charge;
		cout << "Payments made : ";
		cin >> payments_made;
		cout << "Balance : ";
		cin >> balance;

	}	

	void create_new_reservation() {

		cout << "Room number : ";
		cin >> room_number;
		cout << "Check in date : ";
		check_in.create_new_date();
		cout << "Check out date : ";
		check_out.create_new_date();
		cout << "Amount paid : ";
		cin >> amt_paid;
		cout << "Check in time : ";
		cin >> check_in_time;
		cout << "Check out time : ";
		cin >> check_in_time;
		cout << "Room rate : ";
		cin >> room_rate;
		cout << "Room type : ";
		cin >> room_type;
		cout << "Total charge : ";
		cin >> total_charge;
		cout << "Payments made : ";
		cin >> payments_made;
		cout << "Balance : ";
		cin >> balance;

	}

	void add_guest(GuestProfile* _guest) {
		guest = *_guest;
	}

	void print_reservation() {
		guest.print_guest();

		cout << "\nPrinting reservation details..." << endl << endl;

		cout << "Room number : \t\t\t" << room_number << endl;
		cout << "Check in date...\t\t";
		check_in.print_date();
		cout << "Check out date...\t\t";
		check_out.print_date();
		cout << "Amount paid : \t\t\t" << amt_paid << endl;
		cout << "Check in time : \t\t" << check_in_time << endl;
		cout << "Check out time : \t\t" << check_out_time << endl;
		cout << "Room rate : \t\t\t" << room_rate << endl;
		cout << "Room type : \t\t\t" << room_type << endl;
		cout << "Total charge : \t\t\t" << total_charge << endl;
		cout << "Payments made : \t\t" << payments_made << endl;
		cout << "Balance : \t\t\t" << balance << endl;

	}

	void change_reservation(std::string choice) {
		if (choice == "room number") {
			cout << "What is the new room number? ";
			cin >> room_number;
		}
		if (choice == "check in date") {
			check_in.change_date();
		}
		if (choice == "check out date") {
			check_out.change_date();
		}
		if (choice == "amount paid") {
			cout << "What is the new amount paid? ";
			cin >> amt_paid;
		}
		if (choice == "check in time") {
			cout << "What is the new check in time? ";
			cin >> check_in_time;
		}
		if (choice == "check out time") {
			cout << "What is the new check out time? ";
			cin >> check_out_time;
		}
		if (choice == "room rate") {
			cout << "What is the new room rate? ";
			cin >> room_rate;
		}
		if (choice == "room type") {
			cout << "What is the new room type? ";
			cin >> room_type;
		}
		if (choice == "total charge") {
			cout << "What is the new total charge? ";
			cin >> total_charge;
		}
		if (choice == "payments made") {
			cout << "What is the new payments made? ";
			cin >> payments_made;
		}
		if (choice == "balance") {
			cout << "What is the new balance? ";
			cin >> balance;
		}
	}
};

class Room {
public:
	int roomNum;
	std::string status;
	Date day;
};


class Hotel {
private:
	std::vector<Reservation> reservation;
	// this will be created so that we can keep track of the room status
	// for a particular day
	Room hotel_rooms[140];
	// map<GuestProfile, Reservation> booking_log;

public:
	Hotel() {

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

	// void create_new_log(GuestProfile guest, Reservation res) {
	// 	booking_log.insert({guest, res});
	// }

	void add_reservation(Reservation* resv) {
		reservation.push_back(*resv);
	}

	void add_reservation(std::shared_ptr<Reservation> resv) {
		reservation.push_back(*resv);
	}

	void change_room_status(int roomNum, Date date, std::string change_to_status) {
		hotel_rooms[roomNum * date.day].status = change_to_status;
	}

	std::string getRoomStatus(int roomNum, Date lookUpDate) {
		return hotel_rooms[roomNum * lookUpDate.day].status;
	}

};

std::string currentStayScreen(GuestProfile* guest, Reservation* reservation, int roomNum, Date date, std::shared_ptr<Hotel> the_hotel);
// std::string currentStayScreen(std::shared_ptr<GuestProfile> shared_guest_ptr, std::shared_ptr<Reservation> shared_res_ptr, int roomNum, std::shared_ptr<Hotel> the_hotel);
int ShowProfile(GuestProfile profile);
int ShowReport(std::vector<Reservation> reservation_list);
GuestProfile searchScreen();