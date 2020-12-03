make:
	g++ -g -o output Source.cpp search_screen.cpp room_status.cpp \
	room_list.cpp reservations.cpp housekeeping.cpp current_stay_screen.cpp \
	show_profile.cpp show_report.cpp 

clean:
	rm output