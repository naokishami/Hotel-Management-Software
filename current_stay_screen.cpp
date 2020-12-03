#include "hotel.h"
#include <iostream>
#include <map>
using namespace std;


// void hotel::currentStayScreen() {
//     guest *the_guest = new guest();

//     the_guest->f_name = "Billy";
//     the_guest->l_name = "Joe";
//     the_guest->check_in_date = "3/4/2020";
//     the_guest->check_in_time = "12:00PM";
//     the_guest->check_out_date = "3/5/2020";
//     the_guest->check_out_time = "5:00PM";
//     the_guest->room_type = "K";
//     the_guest->room_num = 23;
//     the_guest->room_rate = 34.56;
//     the_guest->total_charge = 34.56;
//     the_guest->payments_made = "Credit card";
//     the_guest->balance = 0.01;

//     cout << "\n\n\nWelcome to the current stay screen" << endl << endl;
    
//     cout << "Here is the guest's information" << endl << endl;

//     cout << "Room number : " << the_guest->room_num << endl;
//     cout << "Guest name : " << the_guest->f_name << " " << the_guest->l_name << endl;
//     cout << "Check in date and time  : " << the_guest->check_in_date << " @ " << the_guest->check_in_time << endl;
//     cout << "Check out date and time : " << the_guest->check_out_date << " @ " << the_guest->check_out_time << endl;
//     cout << "Room type : " << the_guest->room_type << endl;
//     cout << "Room rate : $" << the_guest->room_rate << "/day" << endl;
//     cout << "Total charge : $" << the_guest->total_charge << endl;
//     cout << "Payments made : " << the_guest->payments_made << endl;
//     cout << "Balance : $" << the_guest->balance << endl;

//     cout << endl << endl;
// }

void check_if_satisfactory(GuestProfile* new_guest, Reservation* new_reservation) {
    cout << "Are you satisfied with these details? (y/n) ";
    char response;
    cin >> response;

    while (response != 'y') {
        cout << "Which field would you like to edit? " << endl;

        if (new_guest != nullptr) {
            cout << "1: first name\t\t(Current) " << new_guest->GetFirstName() << endl;
            cout << "2: last name\t\t(Current) " << new_guest->GetLastName() << endl;
            cout << "3: address\t\t(Current) " << new_guest->GetAddress() << endl;
            cout << "4: license plate\t\t(Current) " << new_guest->GetLicense() << endl;
            cout << "5: email\t\t(Current) " << new_guest->GetEmail() << endl;
            cout << "6: id number\t\t(Current) " << new_guest->GetID() << endl;
            cout << "7: state\t\t(Current) " << new_guest->GetState() << endl;
            cout << "8: phone number\t\t(Current) " << new_guest->GetPhoneNo() << endl;
        }
        if (new_reservation != nullptr) {
            cout << "9: room number\t\t(Current)" << new_reservation->room_number << endl;
            cout << "10: check in date\t\t(Current)" << new_reservation->room_number << endl;
            cout << "11: check out date\t\t(Current)" << new_reservation->room_number << endl;
            cout << "12: amount paid\t\t(Current)" << new_reservation->room_number << endl;
            cout << "13: check in time\t\t(Current)" << new_reservation->room_number << endl;
            cout << "14: check out time\t\t(Current)" << new_reservation->room_number << endl;
            cout << "15: room rate\t\t(Current)" << new_reservation->room_number << endl;
            cout << "16: room type\t\t(Current)" << new_reservation->room_number << endl;
            cout << "17: total charge\t\t(Current)" << new_reservation->room_number << endl;
            cout << "18: payments made\t\t(Current)" << new_reservation->room_number << endl;
            cout << "19: balance\t\t(Current)" << new_reservation->room_number << endl;
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

            new_reservation->print_reservation();
        }

        cout << "Are you satisfied with the change? (y/n)";
        cin >> response; 
    }
}

std::string currentStayScreen(GuestProfile* guest, Reservation* the_reservation, int roomNum, Hotel* the_hotel) {
    
    cout << "\n\n\nWelcome to the current stay screen" << endl << endl;

    // DELETE THIS
    Date date = Date(12, 1, 2020);

    cout << "The current status for room #" << roomNum << " is " << the_hotel->getRoomStatus(roomNum, date) << endl;


    if (guest == nullptr && the_reservation == nullptr) {
        cout << "No guest checked in and no reservations" << endl;
        cout << "Let's create a new guest profile first" << endl;

        GuestProfile* new_guest;
        new_guest->create_new_profile();

        cout << "Awesome, we've created your profile!" << endl;
        cout << "Now let's add in the reservation details" << endl;

        Reservation* new_reservation;
        new_reservation->add_guest(new_guest);
        new_reservation->create_new_reservation();

        new_reservation->print_reservation();
        
        check_if_satisfactory(new_guest, new_reservation);

        cout << "Ok we'll add this to our reservation" << endl;
        the_hotel->add_reservation(new_reservation);
    }
    else if (guest != nullptr && the_reservation == nullptr) {
        cout << "Guest checked in but no reservation" << endl;
        cout << "Let's create a new reservation" << endl;

        Reservation* new_reservation;
        new_reservation->add_guest(guest);
        new_reservation->create_new_reservation();

        new_reservation->print_reservation();
        
        check_if_satisfactory(guest, new_reservation);

        cout << "Ok we'll add this to our reservation" << endl;
        the_hotel->add_reservation(new_reservation);   
    }
    else if (guest != nullptr && the_reservation != nullptr) {
        cout << "We have a reservation for you" << endl;

        check_if_satisfactory(guest, the_reservation);

        cout << "Ok we'll add this to our reservation" << endl;
        the_hotel->add_reservation(the_reservation);    
    }


    // if (the_reservation == nullptr) {
    //     cout << "Room number " << roomNum << " is available for check in" << endl;

    //     cout << "Are you a returning guest? (y/n) " << endl;

    //     std::string response;

    //     do {
    //         if (response == "y" || response == "Y") {

    //             cout << "Ok let's create a new profile for you..." << endl;

    //             GuestProfile new_guest;
    //             new_guest.create_new_profile(); 
                
    //             cout << "Perfect, we've created your profile" << endl;

    //             cout << "Now let's add in your reservation details..." << endl;

    //             Reservation new_reservation;

    //             // cout << "Check in date : ";
    //             // cin >> new_reservation.check_in;
    //             // cout << "Check in time : ";
    //             // cin >> new_reservation.check_in_time;
    //             // cout << "Check out date : ";
    //             // cin >> new_reservation.check_out;
    //             // cout << "Check out time : ";
    //             // cin >> new_reservation.check_out_time;
    //         }
    //         else if (response == "n" || response =="N") {
    //             cout << "Ok let's search for your profile..." << endl;

    //             cout << "We'll redirect you to the search screen so that we can find your profile..." << endl;

    //             searchScreen();

    //         }
    //         else {
    //             cout << "Invalid response. Please try again..." << endl;
    //         }
    //     } while (response != "y" || response != "Y" || response != "n" || response != "N");



    
    
    
    // }
    // else {
    // cout << "Here is the guest's information" << endl << endl;

    // cout << "Room number : " << the_reservation->room_number << endl;
    // cout << "Guest name : " << the_reservation->guest.first_name << " " << the_reservation->guest.last_name << endl;
    // cout << "Check in date and time : " << the_reservation->check_in.GetMonth() << "/" \
    //         << the_reservation->check_in.GetDay() << "/" << the_reservation->check_in.GetYear() \
    //         << " @ " << the_reservation->check_in_time << endl;
    // cout << "Check in date and time : " << the_reservation->check_out.GetMonth() << "/" \
    //         << the_reservation->check_out.GetDay() << "/" << the_reservation->check_out.GetYear() \
    //         << " @ " << the_reservation->check_out_time << endl;
    // cout << "Room type : " << the_reservation->room_type << endl;
    // cout << "Room rate : $" << the_reservation->room_rate << "/day" << endl;
    // cout << "Total charge : $" << the_reservation->total_charge << endl;
    // cout << "Payments made : " << the_reservation->payments_made << endl;
    // cout << "Balance : $" << the_reservation->balance << endl;
    // }


    cout << endl << endl;

    return "Occupied";
}