#include "clock.h"

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const {
	return seconds / 3600 % 24;
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const {
	return seconds / 60 % 60;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const {
	return seconds % 60;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const {
	Clock clock;
	std::string time{ "" };
	std::string hour{ "" };
	if (clock.get_hours() > 12) {
		hour = std::to_string(clock.get_hours() - 12);
	} else if (clock.get_hours() < 12 && clock.get_hours() != 0) {
		hour = std::to_string(clock.get_hours());
	} else { hour = "12"; }
	std::string minute{ "" };
	if(clock.get_minutes() > 9){ minute.append(std::to_string(clock.get_minutes())); }
	else {
		minute.append("0");
		minute.append(std::to_string(clock.get_minutes()));
	}	
	std::string second{ "" };
	if (clock.get_seconds() > 9) { second.append(std::to_string(clock.get_seconds())); }
	else {
		second.append("0");
		second.append(std::to_string(clock.get_seconds()));;
	}
	std::string period{ "" };
	if (clock.get_hours() > 11) {
		period = "PM";
	} else { period = "AM"; }
	time.append(hour);
	time.append(":");
	time.append(minute);
	time.append(":");
	time.append(second);
	time.append(" ");
	time.append(period);
	return time;
}

void Clock::update_time()
{
	seconds += 1;
}
