





#include "passenger.h"

using namespace std;
passenger::passenger() {
	fname = "\0";
}

//dar soorat lazem mitavan fathername  ra ham be soorat constructur dad



string passenger::set_fname() {
	cout << "Enter Father'sName " << endl;
	cin >> fname;
	return "\0";
}
string passenger::get_fname() {
	return fname;
}
void passenger::get_info() {
	cout << "Passenger  " << endl;
	cout << "Name  :  " << get_name() << endl;
	cout << "Last Name  :  " << get_lname() << endl;
	cout << "Nationalcode  :  " << get_nationalcode();
	cout << "Birthday  :  ";
	show_birth();
	cout << "father's Name  :  "<<fname<<endl;
}
long int passenger::get_nationalcode() {
    return get_nationalcode();
}
ostream &operator <<(ostream &output, const passenger &data)
{
    return output << data.birthday << " " << data.fname << " "
                  << data.lname << " " << data.name << " " << data.nationalcode;
}

istream &operator >>(istream &input, passenger &data)
{
    return input >> data.birthday >> data.fname
                 >> data.lname >> data.name >> data.nationalcode;
}
