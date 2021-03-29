// #include "hotel.h"
// #include <iostream>
// #include <string>
// #include <vector>

// //Display a guest's profile information
// int ShowProfile(GuestProfile profile) {
// 	int user_choice_main;
// 	bool valid_choice = false;
// 	bool modifying = false;
// 	int user_choice_modify;
// 	bool valid_choice_modify = false;
// 	std::string modify_val_holder;
// 	std::cout << "*********************************\n";
// 	std::cout << "Profile for " << profile.GetFirstName() << " " << profile.GetLastName() << "\n";
// 	std::cout << "*********************************\n";
// 	std::cout << "First name: " << profile.GetFirstName() << "\n";
// 	std::cout << "Last name: " << profile.GetLastName() << "\n";
// 	std::cout << "Address: " << profile.GetAddress() << "\n";
// 	std::cout << "License plate: " << profile.GetLicense() << "\n";
// 	std::cout << "Email address: " << profile.GetEmail() << "\n";
// 	std::cout << "ID number: " << profile.GetID() << "\n";
// 	std::cout << "State: " << profile.GetState() << "\n";
// 	std::cout << "Phone number: " << profile.GetPhoneNo() << "\n";
// 	std::cout << "=================================\n";
// 	std::cout << std::endl;
// 	std::cout << "What would you like to do?\n";
// 	std::cout << std::endl;
// 	std::cout << "1: Modify existing data\n";
// 	std::cout << "2: Return to main menu\n";
// 	std::cout << std::endl;
// 	while (!valid_choice) {
// 		std::cout << "Enter a number from the list above, then press Enter.\n";
// 		std::cin >> user_choice_main;
// 		if (std::cin.fail()) {
// 			std::cout << "Invalid input.\n";
// 			std::cin.clear();
// 			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// 		}
// 		else if (user_choice_main == 1) {
// 			system("CLS");
// 			modifying = true;
// 			valid_choice = true;
// 		}
// 		else if (user_choice_main == 2) {
// 			system("CLS");
// 			valid_choice = true;
// 			return 1;
// 		}
// 		else {
// 			std::cout << "Invalid input.\n";
// 		}
// 	}	
// 	while (modifying) {
// 		while (!valid_choice_modify) {
// 			modify_val_holder = "";
// 			std::cout << "Which field would you like to modify?\n";
// 			std::cout << std::endl;
// 			std::cout << "1: First name		(current: " << profile.GetFirstName() << ")\n";
// 			std::cout << "2: Last name		(current: " << profile.GetLastName() << ")\n";
// 			std::cout << "3: Address		(current: " << profile.GetAddress() << ")\n";
// 			std::cout << "4: License plate	(current: " << profile.GetLicense() << ")\n";
// 			std::cout << "5: Email address	(current: " << profile.GetEmail() << ")\n";
// 			std::cout << "6: ID number		(current: " << profile.GetID() << ")\n";
// 			std::cout << "7: State		(current: " << profile.GetState() << ")\n";
// 			std::cout << "8: Phone number		(current: " << profile.GetPhoneNo() << ")\n";
// 			std::cout << std::endl;
// 			std::cout << "9: Quit and return to main menu\n";
// 			std::cout << std::endl;
// 			std::cout << "Enter a number from the list above, then press Enter.\n";
// 			std::cin >> user_choice_modify;
// 			if (std::cin.fail() || user_choice_modify < 1 || user_choice_modify > 10) {
// 				std::cout << "Invalid input.\n";
// 				std::cin.clear();
// 				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// 			}
// 			else {
// 				valid_choice_modify = true;
// 			}
// 		}
// 		switch(user_choice_modify) {
// 		case 1: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's first name, then press Enter.		(current:" << profile.GetFirstName() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetFirstName(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 2: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's last name, then press Enter.		(current:" << profile.GetLastName() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetLastName(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 3: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's address, then press Enter.		(current:" << profile.GetAddress() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetAddress(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 4: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's license plate, then press Enter.		(current:" << profile.GetLicense() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetLicense(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 5: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's email address, then press Enter.		(current:" << profile.GetEmail() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetEmail(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 6: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's ID number, then press Enter.		(current:" << profile.GetID() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetID(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 7: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's state, then press Enter.		(current:" << profile.GetState() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetState(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 8: {
// 			system("CLS");
// 			std::cout << "Please enter the guest's phone number, then press Enter.		(current:" << profile.GetPhoneNo() << ")\n";
// 			std::cin.ignore(1);
// 			std::getline(std::cin, modify_val_holder);
// 			profile.SetPhoneNo(modify_val_holder);
// 			valid_choice_modify = false;
// 			system("CLS");
// 			break;
// 		}
// 		case 9: {
// 			system("CLS");
// 			modifying = false;
// 			return 1;
// 		}
// 		}
// 	}
// }
