#include "guest_profile.h"

#include <iostream>

GuestProfile::GuestProfile() {
	first_name = "";
	last_name = "";
	address = "";
	license_plate = "";
	email = "";
	id_no = "";
	state = "";
	phone_no = "";
}

bool GuestProfile::operator==(const GuestProfile& other) {
	if (other.first_name != first_name)	return false;
	else if (other.last_name != last_name) return false;
	else if (other.address != address) return false;
	else if (other.license_plate != license_plate) return false;
	else if (other.email != email) return false;
	else if (other.id_no != id_no) return false;
	else if (other.state != state) return false;
	else if (other.phone_no != phone_no) return false;
	else return true;
}

void GuestProfile::print_guest() {
	std::cout << "Printing guest details..." << std::endl << std::endl;

	std::cout << "First name : \t\t\t" << first_name << std::endl;
	std::cout << "Last name : \t\t\t" << last_name << std::endl;
	std::cout << "Address : \t\t\t" << address << std::endl;
	std::cout << "License plate : \t\t" << license_plate << std::endl;
	std::cout << "Email : \t\t\t" << email << std::endl;
	std::cout << "Id number : \t\t\t" << id_no << std::endl;
	std::cout << "State : \t\t\t" << state << std::endl;
	std::cout << "Phone number : \t\t\t" << phone_no << std::endl;
}

void GuestProfile::create_new_profile() {
	std::cout << "Enter the following fields..." << std::endl;

	std::cout << "First name : ";
	std::cin >> first_name;
	std::cout << "Last name : ";
	std::cin >> last_name;
	std::cout << "Address : ";
	std::cin.ignore(1);
	getline(std::cin, address);
	std::cout << "License plate : ";
	std::cin >> license_plate;
	std::cout << "Email : ";
	std::cin >> email;
	std::cout << "Id number : ";
	std::cin >> id_no;
	std::cout << "State : ";
	std::cin >> state;
	std::cout << "Phone number : ";
	std::cin >> phone_no;
}

void GuestProfile::change_profile(std::string choice) {
	if (choice == "first name") {
		std::cout << "What is the new first name? ";
		std::cin >> first_name;
	}
	else if (choice == "last name") {
		std::cout << "What is the new last name? ";
		std::cin >> last_name;
	}
	else if (choice == "address") {
		std::cout << "What is the new address? ";
		std::cin >> address;
	}
	else if (choice == "license plate") {
		std::cout << "What is the new license plate? ";
		std::cin >> license_plate;
	}
	else if (choice == "email") {
		std::cout << "What is the new email? ";
		std::cin >> email;
	}
	else if (choice == "id number") {
		std::cout << "What is the new id number? ";
		std::cin >> id_no;
	}
	else if (choice == "state") {
		std::cout << "What is the new state? ";
		std::cin >> state;
	}
	else if (choice == "phone number") {
		std::cout << "What is the new phone number? ";
		std::cin >> phone_no;
	}
}

// std::ostream& operator<<(std::ostream& os, const GuestProfile& guest) {
// 	os << "Printing guest details..." << std::endl << std::endl;

// 	os << "First name : \t\t\t" << guest.first_name << std::endl;
// 	os << "Last name : \t\t\t" << guest.last_name << std::endl;
// 	os << "Address : \t\t\t" << guest.address << std::endl;
// 	os << "License plate : \t\t" << guest.license_plate << std::endl;
// 	os << "Email : \t\t\t" << guest.email << std::endl;
// 	os << "Id number : \t\t\t" << guest.id_no << std::endl;
// 	os << "State : \t\t\t" << guest.state << std::endl;
// 	os << "Phone number : \t\t\t" << guest.phone_no << std::endl;

// 	return os;
// }