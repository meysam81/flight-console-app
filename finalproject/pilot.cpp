


#include "pilot.h"


using namespace std;

pilot::pilot() {
	perssonelcode = 0;
	hiredate;
}

//dar soorat lazem mitavan perssonelcode ra ham be soorat constructur dad



long int pilot::set_perssonelcode() {
	cout << "Enter Perssonelcode " << endl;
	cin >> perssonelcode;
	return 0;
}
long int pilot::get_perssonelcode() {
	return perssonelcode;
}
void pilot::get_imfo() {
	cout << "Pilot  " << endl;
	cout << "Name  :  " << get_name() << endl;
	cout << "Last Name  :  " << get_lname() << endl;
	cout << "Nationalcode  :  " << get_nationalcode();
	cout << "Birthday  :  ";
	show_birth();
	cout << "Perssonelcode  :  "<<perssonelcode<<endl;
}
void pilot::get_worklist() {
	
}
long int pilot::get_nationalcode() {
	return get_nationalcode();
}
void pilot::set_hire(date date2) {
	hiredate = date2;
}
date pilot::get_hire() {
	return hiredate;
}
void pilot::set_worklist(flight flight2) {
    worklist.push_back(flight2);
}
ostream &operator <<(ostream &output, const pilot &data)
{
    return output << data.name << " " << data.lname << " " << data.birthday << " "
                  << data.nationalcode << " " << data.perssonelcode << " "
                  << data.hiredate;
}

istream &operator >>(istream &input, pilot &data)
{
    return input >> data.name >> data.lname >> data.birthday
                  >> data.nationalcode >> data.perssonelcode
                  >> data.hiredate;
}
