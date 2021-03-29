#include "hotel.h"
#include <iostream>
#include <map>
using namespace std;

void search(string generic, std::shared_ptr<Hotel> the_hotel) {
	//system("CLS");
	cout << "\nWhat is the " << generic << "? ";

	string value;
	getline(cin >> ws, value);

	cout << "Searching for " << value << "..." << endl << endl;

	std::pair <std::string, std::string> search_pair;
	search_pair = std::make_pair(value, generic);

	

	system("PAUSE");
}

GuestProfile searchScreen(std::shared_ptr<Hotel> the_hotel) {
	system("CLS");
	cout << "\n\n\nWelcome to the search screen" << endl << endl;;

	cout << "1 -- Guests by First Name" << endl;
	cout << "2 -- Guests by Last Name" << endl;
	cout << "3 -- Room Number" << endl;
	cout << "4 -- Phone Number" << endl;
	cout << "5 -- Street Address" << endl;
	cout << "6 -- Check In Date" << endl;
	cout << "7 -- Check Out Date" << endl << endl;

	cout << "Enter a number to search for an entry : ";
	int num;
	cin >> num;

	map<int, string> look_up_table;

	look_up_table[1] = "first name";
	look_up_table[2] = "last name";
	look_up_table[3] = "room number";
	look_up_table[4] = "phone number";
	look_up_table[5] = "street address";
	look_up_table[6] = "check in date";
	look_up_table[7] = "check out date";

	search(look_up_table[num], the_hotel);

	GuestProfile temp;

	return temp;
}