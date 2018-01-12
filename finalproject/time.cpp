



#include "time.h"


using namespace std;


my_time::my_time() {
	hour = "";
	minute = "";
}
string my_time::set_hour() {
	cout << "Enter Time(hour)  " << endl;
	cin >> hour;
	return "\0";
}
string my_time::set_minute() {
	cout << "Enter Time(minute)  " << endl;
	cin >> minute;
	return "\0";
}
void my_time::get_time() {
    cout << hour << " : " << minute << endl;
}
ostream &operator <<(ostream &output, const my_time &data)
{
    return output << data.hour << " " << data.minute;
}

istream &operator >>(istream &input, my_time &data)
{
    return input >> data.hour >> data.minute;
}
