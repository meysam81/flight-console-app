


#include "human.h"


using namespace std;

human::human() {
	name = "";
	lname = "";
	nationalcode = 0;
}
string human::set_name() {
	cout << "Please Enter Name  " << endl;
	cin >> name;
	return "";
}
string human::set_lname() {
	cout << "Please Enter Last Name  " << endl;
	cin >> lname;
	return "";
}
long int human::set_nationalcode() {
	cout << "Please Enter Nationalcode  " << endl;
	cin >> nationalcode;
	return 0;
}
void human::set_birth(date date2) {
	birthday = date2;
}
string human::get_name() {
	return name;
}
string human::get_lname() {
	return lname;
}
long int human::get_nationalcode() {
	return nationalcode;
}
date human::get_birth() {
	return birthday;
}
void human::show_birth() {
	birthday.get_date();
}
void human::get_imfo() {
	cout << "First Name  :  " << name;
	cout << "Last Name  :  " << lname;
	cout << "Nationalcode  :  " << nationalcode;
}

//dar soorat lazem mitavan name ,... ra az constructor kharej kard