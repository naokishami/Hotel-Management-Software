#include "hotel.h"
#include <iostream>
using namespace std;

void hotel::houseKeeping() {
	struct housekeeping hk[20];

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