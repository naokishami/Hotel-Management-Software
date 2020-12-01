#include "hotel.h"
#include <iostream>
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


std::string currentStayScreen(Reservation* the_reservation, int room_number) {
    
    cout << "\n\n\nWelcome to the current stay screen" << endl << endl;
    

    if (the_reservation == nullptr) {
        cout << "Room number " << room_number << " is available for check in" << endl;

        GuestProfile new_guest;
        Reservation new_reservation;

        cout << "Enter the following fields..." << endl;

        // cout << "First name : ";
        // cin >> new_guest.first_name;
        // cout << "Last name : ";
        // cin >> new_guest.last_name;
        // cout << "Check in date : ";
        // cin >> new_reservation.check_in;
        // cout << "Check in time : ";
        // cin >> new_reservation.check_in_time;
        // cout << "Check out date : ";
        // cin >> new_reservation.check_out;
        // cout << "Check out time : ";
        // cin >> new_reservation.check_out_time;


    
    
    
    }
    else {
        cout << "Here is the guest's information" << endl << endl;

        cout << "Room number : " << the_reservation->room_number << endl;
        cout << "Guest name : " << the_reservation->guest.first_name << " " << the_reservation->guest.last_name << endl;
        cout << "Check in date and time : " << the_reservation->check_in.GetMonth() << "/" \
                << the_reservation->check_in.GetDay() << "/" << the_reservation->check_in.GetYear() \
                << " @ " << the_reservation->check_in_time << endl;
        cout << "Check in date and time : " << the_reservation->check_out.GetMonth() << "/" \
                << the_reservation->check_out.GetDay() << "/" << the_reservation->check_out.GetYear() \
                << " @ " << the_reservation->check_out_time << endl;
        cout << "Room type : " << the_reservation->room_type << endl;
        cout << "Room rate : $" << the_reservation->room_rate << "/day" << endl;
        cout << "Total charge : $" << the_reservation->total_charge << endl;
        cout << "Payments made : " << the_reservation->payments_made << endl;
        cout << "Balance : $" << the_reservation->balance << endl;
    }


    cout << endl << endl;

    return "done";
}