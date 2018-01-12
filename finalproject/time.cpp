



#include "time.h"


using namespace std;


time::time() {
	hour = "";
	minute = "";
}
string time::set_hour() {
	cout << "Enter Time(hour)  " << endl;
	cin >> hour;
	return "\0";
}
string time::set_minute() {
	cout << "Enter Time(minute)  " << endl;
	cin >> minute;
	return "\0";
}
void time::get_time() {
	cout << hour << " : " << minute << endl;
}