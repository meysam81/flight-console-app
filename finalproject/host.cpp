


#include "host.h"


using namespace std;

host::host() {
	perssonelcodeh = 0;
}

//dar soorat lazem mitavan perssonelcode ra ham be soorat constructur dad4

void host::set_hire(date date2) {
	hiredate = date2;
}
date host::get_hire() {
	return hiredate;
}
long int host::set_perssonelcodeh(){
	cout << "Enter Perssonelcode  " << endl;
	cin >> perssonelcodeh;
	return 0;
}
long int host::get_perssonelcodeh() {
	return perssonelcodeh;
}
void host::get_imfo() {
	cout << "First Name  :  " << name << endl;
	cout << "Last Name  :  " << lname;
	cout << "Nationalcode  :  " << nationalcode;
	cout << "Perssonelcode  :  "<<perssonelcodeh<<endl;
	cout << "Birthday  ";
	birthday.get_date();
}
long int host::get_nationalcode() {
	return get_nationalcode();
}
void host::set_worklist(flight flight2) {
    worklist.push_back(flight2);
}
ostream &operator <<(ostream &output, const host &data)
{
    return output << data.birthday << " " << data.hiredate << " "
                  << data.lname << " " << data.name << " "
                  << data.nationalcode << " " << data.perssonelcodeh;
}

istream &operator >>(istream &input, host &data)
{
    return input >> data.birthday >> data.hiredate
                 >> data.lname >> data.name
                 >> data.nationalcode >> data.perssonelcodeh;
}
