#include "hotel.h"
#include <iostream>
using namespace std;


void hotel::currentStayScreen() {
    guest *the_guest = new guest();

    the_guest->f_name = "Billy";
    the_guest->l_name = "Joe";
    the_guest->check_in_date = "3/4/2020";
    the_guest->check_in_time = "12:00PM";
    the_guest->check_out_date = "3/5/2020";
    the_guest->check_out_time = "5:00PM";
    the_guest->room_type = "K";
    the_guest->room_num = 23;
    the_guest->room_rate = 34.56;
    the_guest->total_charge = 34.56;
    the_guest->payments_made = "Credit card";
    the_guest->balance = 0.01;

    cout << "\n\n\nWelcome to the current stay screen" << endl << endl;
    
    cout << "Here is the guest's information" << endl << endl;

    cout << "Room number : " << the_guest->room_num << endl;
    cout << "Guest name : " << the_guest->f_name << " " << the_guest->l_name << endl;
    cout << "Check in date and time  : " << the_guest->check_in_date << " @ " << the_guest->check_in_time << endl;
    cout << "Check out date and time : " << the_guest->check_out_date << " @ " << the_guest->check_out_time << endl;
    cout << "Room type : " << the_guest->room_type << endl;
    cout << "Room rate : $" << the_guest->room_rate << "/day" << endl;
    cout << "Total charge : $" << the_guest->total_charge << endl;
    cout << "Payments made : " << the_guest->payments_made << endl;
    cout << "Balance : $" << the_guest->balance << endl;

    cout << endl << endl;
}