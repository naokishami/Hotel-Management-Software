#include "hotel.h"

#include <iostream>
#include <map>
using namespace std;

void check_if_satisfactory(GuestProfile* new_guest, Reservation* new_reservation) {
    cout << "Are you satisfied with these details? (y/n) ";
    char response;
    cin >> response;

    while (response != 'y') {
        cout << "\nWhich field would you like to edit? " << endl;

        if (new_guest != nullptr) {
            cout << "1: first name\t\t\t(Current) " << new_guest->GetFirstName() << endl;
            cout << "2: last name\t\t\t(Current) " << new_guest->GetLastName() << endl;
            cout << "3: address\t\t\t(Current) " << new_guest->GetAddress() << endl;
            cout << "4: license plate\t\t(Current) " << new_guest->GetLicense() << endl;
            cout << "5: email\t\t\t(Current) " << new_guest->GetEmail() << endl;
            cout << "6: id number\t\t\t(Current) " << new_guest->GetID() << endl;
            cout << "7: state\t\t\t(Current) " << new_guest->GetState() << endl;
            cout << "8: phone number\t\t\t(Current) " << new_guest->GetPhoneNo() << endl;
        }
        if (new_reservation != nullptr) {
            cout << "9: room number\t\t\t(Current)" << new_reservation->room_number << endl;
            cout << "10: check in date\t\t(Current)";
            new_reservation->check_in.print_date();
            cout << "11: check out date\t\t(Current)";
            new_reservation->check_out.print_date();
            cout << "12: amount paid\t\t\t(Current)" << new_reservation->amt_paid << endl;
            cout << "13: check in time\t\t(Current)" << new_reservation->check_in_time << endl;
            cout << "14: check out time\t\t(Current)" << new_reservation->check_out_time << endl;
            cout << "15: room rate\t\t\t(Current)" << new_reservation->room_rate << endl;
            cout << "16: room type\t\t\t(Current)" << new_reservation->room_type << endl;
            cout << "17: total charge\t\t(Current)" << new_reservation->total_charge << endl;
            cout << "18: payments made\t\t(Current)" << new_reservation->payments_made << endl;
            cout << "19: balance\t\t\t(Current)" << new_reservation->balance << endl;
        }

        int user_choice_modify;
        cin >> user_choice_modify;

        if (user_choice_modify < 9) {
            map<int, string> look_up_table;

            look_up_table[1] = "first name";
            look_up_table[2] = "last name";
            look_up_table[3] = "address";
            look_up_table[4] = "license plate";
            look_up_table[5] = "email";
            look_up_table[6] = "id number";
            look_up_table[7] = "state";
            look_up_table[8] = "phone number";


            new_guest->change_profile(look_up_table[user_choice_modify]);

            cout << endl << endl;
            new_guest->print_guest();
        }
        else if (user_choice_modify > 8) {
            map<int, string> look_up_table;

            look_up_table[9] = "room number";
            look_up_table[10] = "check in date";
            look_up_table[11] = "check out date";
            look_up_table[12] = "amount paid";
            look_up_table[13] = "check in time";
            look_up_table[14] = "check out time";
            look_up_table[15] = "room rate";
            look_up_table[16] = "room type";
            look_up_table[17] = "total charge";
            look_up_table[18] = "payments made";
            look_up_table[19] = "balance";

            new_reservation->change_reservation(look_up_table[user_choice_modify]);

            cout << endl << endl;
            new_reservation->print_reservation();
        }

        cout << "\nAre you satisfied with the change? (y/n) ";
        cin >> response; 
    }
}

std::string currentStayScreen(GuestProfile* guest, Reservation* the_reservation, int roomNum, Date date, std::shared_ptr<Hotel> the_hotel) {
    
    cout << "\n\n\n\t\t\tWelcome to the current stay screen" << endl << endl;

    cout << "The current status for room #" << roomNum << " on " << date.GetMonth()
        << "/" << date.GetDay() << "/" << date.GetYear() << " is " 
        << the_hotel->getRoomStatus(roomNum, date) << endl << endl;


    if (guest == nullptr && the_reservation == nullptr) {
        cout << "No guest profile and no reservation" << endl;
        cout << "Let's create a new guest profile first\n" << endl;

        GuestProfile* new_guest = new GuestProfile();
        new_guest->create_new_profile();

        cout << "\nAwesome, we've created your profile!" << endl;
        cout << "Now let's add in the reservation details\n" << endl;

        // new_guest->print_guest();

        Reservation* new_reservation = new Reservation();
        new_reservation->add_guest(new_guest);

        cout << endl << endl;

        new_reservation->create_new_reservation(roomNum, date);

        cout << endl << endl;

        new_reservation->print_reservation();
        
        check_if_satisfactory(new_guest, new_reservation);

        cout << "\nType 1 to check in" << endl;
        cout << "Type 2 to go back to the previous screen (no reservation made)" << endl;

        char response;
        cin >> response;

        if (response == '1') {
            cout << "\nOk we'll add this to our reservation" << endl;
            the_hotel->add_reservation(new_reservation);
            the_hotel->change_room_status(roomNum, date, "Occupied");
            return "Occupied";
        }
        else if (response == '2') {
            cout << "\nReturning to the previous screen" << endl;
            return "Available";
        }
    }
    else if (guest != nullptr && the_reservation == nullptr) {
        cout << "Guest profile exists but no reservation" << endl;
        cout << "Let's create a new reservation\n" << endl;

        GuestProfile* new_guest = guest;

        Reservation* new_reservation = new Reservation();
        new_reservation->add_guest(guest);
        new_reservation->create_new_reservation(roomNum, date);


        cout << endl << endl;
        new_reservation->print_reservation();
        
        check_if_satisfactory(guest, new_reservation);


        cout << "\nType 1 to check in" << endl;
        cout << "Type 2 to go back to the previous screen (no reservation made)" << endl;

        char response;
        cin >> response;

        if (response == '1') {
            cout << "\nOk we'll add this to our reservation" << endl;
            the_hotel->add_reservation(new_reservation);
            the_hotel->change_room_status(roomNum, date, "Occupied");
            return "Occupied";
        }
        else if (response == '2') {
            cout << "\nReturning to the previous screen" << endl;
            return "Available";
        }
    }
    else if (guest != nullptr && the_reservation != nullptr) {
        cout << "We have a reservation for you\n" << endl;

        check_if_satisfactory(guest, the_reservation);


        cout << "\nType 1 to check out" << endl;
        cout << "Type 2 to go back to the previous screen (changes not made)" << endl;

        char response;
        cin >> response;

        if (response == '1') {
            cout << "\nOk we'll check you out" << endl;
            the_hotel->change_room_status(roomNum, date, "Available");
            return "Available";
        }
        else if (response == '2') {
            cout << "\nReturning to the previous screen" << endl;
            return "Occupied";
        }
    }


    cout << endl << endl;

    return "Function returned unexpectedly";
}