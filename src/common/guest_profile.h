#pragma once

#include <iostream>

class GuestProfile {
public:
	std::string first_name;
	std::string last_name;
	std::string address;
	std::string license_plate;
	std::string email;
	std::string id_no;
	std::string state;
	std::string phone_no;

public:
	GuestProfile(); 

	bool operator==(const GuestProfile& other);
	void print_guest();
	void create_new_profile();
	void change_profile(std::string choice);

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

// 	friend std::ostream& operator<<(std::ostream& os, const GuestProfile& guest);
};

