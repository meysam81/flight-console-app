


#include "date.h"


using namespace std;


date::date() {
	year = "";
	month = "";
	day = "";
}
string date::set_year() {
	cout << "Enter Year  " << endl;
	cin >> year;
	return "\0";
}
string date::set_month() {
	cout << "Enter Month  " << endl;
	cin >> month;
	return "\0";
}
string date::set_day() {
	cout << "Enter Day  " << endl;
	cin >> day;
	return "\0";
}
void date::get_date() {
	cout << year << "/" << month << "/" << day << endl;
}
string date::get_year() {
	return year;
}
string date::get_month() {
	return month;
}
string date::get_day() {
	return day;
}