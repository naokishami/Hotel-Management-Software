#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;

// hello

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
	void search(string generic);
	void searchScreen();
	void currentStayScreen();

};
struct guest {
	string f_name;
	string l_name;
	string check_in_date;
	string check_in_time;
	string check_out_date;
	string check_out_time;
	string room_type;
	int room_num;
	float room_rate;
	float total_charge;
	string payments_made;
	float balance;
}gg[20];
struct housekeeping {
	string Roomnumber;
	string HousekeepName;
	string Type;
	string Status;
	bool BathroomTowels;
	bool BedSheets;
	bool Vacuum;
	bool Dusting;
	bool Electronics;

}hk[20];
struct reservation
{
	string DateMade;
	string DateCheckin;
	string DateCheckout;
	string RoomType;
	string WebsiteReservationMade;
	double Rate;
	double TotalCharge;
}res[20];
void hotel::roomStatus() {
	system("CLS");
	string status;
	cout << "Types of rooms and abbreviations: \n";
	cout << " King: K\n Double Queen: DQ\n Double Queen with Kitchen: DQK\n Suite: S\n\n";
	cout << "\n\t\tList of rooms and statuses";
	cout << "\n\t\t--------------------------\n";
	while (roomNumber <= 20) {
		for (int i = 1; i <= 5; i++) {
			cout << "Room Number: " << i << "\t\tType: K " << setw(5) << "\t Status: " << status << endl;
		}
		for (int i = 6; i <= 10; i++) {
			cout << "Room Number: " << i << "\t\tType: DQ\t Status: "<< status << endl;
		}
		for (int i = 11; i <= 15; i++) {
			cout << "Room Number: " << i << "\t\tType: DQK\t Status: " << status << endl;
		}
		for (int i = 16; i <= 20; i++) {
			cout << "Room Number: " << i << "\t\tType: S " << setw(5) << "\t Status: " << status << endl;
		}
		break;
	}
	system("PAUSE");
}
void hotel::roomList() {
	system("CLS");
	cout << "\t\t\tDay 1\t  Day 2\t\tDay 3\t  Day 4\t\tDay 5\t  Day 6\t\tDay 7\n";
	cout << "\t\t |---------|---------|---------|---------|---------|---------|---------|\n";
	//Guest will represent the guest variable for part two when we do the backend coding
	for (int i = 1; i <= 20; i++) {
		cout << "Room: " << setw(2) << i << setw(2) << " |" <</*setw(4) <<  Guest  <<*/ setw(10) << "|" << /*setw(4) <<  Guest <<*/ setw(10) << "    |" << /*setw(4) << Guest */ setw(10) << "   |" << /*setw(4) <<  Guest */ setw(10) << "   |" << /*setw(4) <<  Guest */ setw(10) << "   |" << /*setw(4) << Guest <<*/ setw(10) << "   |" << /*setw(4) << Guest <<*/ setw(10) << "   |" << endl;
		cout << "\t\t |---------|---------|---------|---------|---------|---------|---------|\n";
	}
	system("PAUSE");
}
void hotel::Reservations() {
	system("CLS");
	cout << "All current reservations" << endl;
	for (int i = 0; i<20; i++)
	{
		cout<<"reservation first name: "<<gg[i].f_name<<endl;
		cout<<"last name: "<<gg[i].l_name<<endl;
		cout<<"check in: "<<res[i].DateCheckin<<endl;
		cout<<"check out: "<<res[i].DateCheckout<<endl;
		cout<<"date made: "<<res[i].DateMade<<endl;
		cout<<"rate: "<<res[i].Rate<<endl;
		cout<<"room type: "<<res[i].RoomType<<endl;
		cout<<"website reservastion made: "<<res[i].WebsiteReservationMade<<endl;
		cout<<"total charge: "<<res[i].TotalCharge<<endl<<endl;
	}
	system("PAUSE");
}
void hotel::houseKeeping() {
	system("CLS");
	cout << "Welcome to the housekeeping manager" << endl;
	for(int i=0;i<20;i++)
	{
		cout<<"Room number: "<< hk[i].Roomnumber<<endl;
		cout<<"House keeper name:"<< hk[i].HousekeepName<<endl;
		cout<<"type of cleanup"<< hk[i].Type<<endl;
		cout<<"status" <<hk[i].Status<<endl;
		cout<<"does the room have new bathroom towels? "<<hk[i].BathroomTowels<<endl;
		cout<<"does the room have new bedsheets? "<< hk[i].BedSheets<<endl;
		cout<< "was the room vaccumed?: "<< hk[i].Vacuum << endl;
		cout<< "was the room dusted?" <<hk[i].Dusting << endl;
		cout<< "where the electronics cleaned?" <<hk[i].Electronics << endl<<endl;
	}
	system("PAUSE");
}
void hotel::search(string generic) {
	//system("CLS");
	cout << "\nWhat is the " << generic << "? ";

	string value;
	getline(cin >> ws, value);

	cout << "Searching for " << value << "..." << endl << endl;
	system("PAUSE");
}
void hotel::searchScreen() {
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

	search(look_up_table[num]);
}
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

int main() {
	hotel h;
	int select;
	do {
		system("CLS");
		cout << endl<<"-----------Welcome to the HotelX management software!---------" << endl << endl;
		cout << "\t1: Room Status" << endl;
		cout << "\t2: Room List" << endl;
		cout << "\t3: Reservations" << endl;
		cout << "\t4: Housekeeping" << endl;
		cout << "\t5: Guest Profile" << endl;
		cout << "\t6: Guest Current Stay" << endl;
		cout << "\t7: Guest Search" << endl;
		cout << "\t8: Daily report" << endl;
		cout << "\t9: Exit"<< endl;//or any other value
		cout << "Enter the number of the option you would like to use: ";
		cin >> select;
		if (select == 1) {
			h.roomStatus();
		}
	    if (select == 2) {
			h.roomList();
		}
		if (select == 3) {
			h.Reservations();
		}
		if (select == 4) {
			h.houseKeeping();
		}
		if (select == 5) {

		}
		if (select == 6) {
			h.currentStayScreen();
		}
		if (select == 7) {
			h.searchScreen();
		}
		if (select == 8) {

		}
		if (select == 9) {
			break;
		}

	} while (select !=9);



	system("PAUSE");
	return 0;
}
