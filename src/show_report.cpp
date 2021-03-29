#include "hotel.h"
#include <vector>
#include <iostream>

//Show the report for a selected day
int ShowReport(std::vector<Reservation> reservation_list) {
	double running_total = 0.0;

		std::cout << "*********************************\n";
		std::cout << "Today's Report\n";
		std::cout << "*********************************\n";

	if (reservation_list.size() == 0) {
		std::cout << "\nThere are no reservations currently in the system.\n";
	}
	else {
		for (unsigned int i = 0; i < reservation_list.size(); i++) {
			if (reservation_list[i].amt_paid > 0) {
				running_total = running_total + reservation_list[i].amt_paid;
				std::cout << "\n";
				std::cout << "Room number: " << reservation_list[i].room_number << "\n";
				std::cout << "Guest name: " << reservation_list[i].guest.GetFirstName() << " " << reservation_list[i].guest.GetLastName() << "\n";
				std::cout << "Date in: " << reservation_list[i].check_in.GetYear() << "-" << reservation_list[i].check_in.GetMonth() << "-" << reservation_list[i].check_in.GetDay() << "\n";
				if (reservation_list[i].check_out.GetYear() > -1)
					std::cout << "Date out: " << reservation_list[i].check_out.GetYear() << "-" << reservation_list[i].check_out.GetMonth() << "-" << reservation_list[i].check_out.GetDay() << "\n";
				std::cout << "Amount paid: $" << reservation_list[i].amt_paid << "\n";
			}
		}

		std::cout << "\n";
		std::cout << "Today's total: $" << running_total << "\n";
	}
	std::cout << std::endl;
	std::cout << "=================================\n";
	std::cout << "\nPress Enter to return to the main menu.";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("CLS");
	//std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	return 1;
}