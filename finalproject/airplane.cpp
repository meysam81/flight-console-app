


#include "airplane.h"


using namespace std;


airplane::airplane() {
	pserialnum = "";
	seatnum = 0;
}
airplane::airplane(string pserial, int seat, date date2) : pserialnum(pserial) , seatnum(seat) , date1(date2)
{
}
string airplane::set_pserialnum() {
	cout << "Enter Serialnumber" << endl;
	cin >> pserialnum;
	return "\0";
}
int airplane::set_seatnum() {
	cout << "Enter Seat Numbers  " << endl;
	cin >> seatnum;
	return 0;
}
string airplane::get_pserialnum() {
	return pserialnum;
}
int airplane::get_seatnum() {
	return seatnum;
}
void airplane::get_imfo() {
	cout << "Airplane's Serial Number  :  " << pserialnum << endl;
	cout << "Airplane's Seat Numbers  :  " << seatnum << endl;
	cout << "Produce Time  :   ";
	date1.get_date();
	cout << "Airplanes's Stolen Tickets  :  "<<tnum<<endl;
}
void airplane::set_tnum() {
	tnum++;
}
void airplane::get_tnum() {
    cout << tnum << endl;
}

ostream &operator <<(ostream &output, const airplane &data)
{
    return output << data.pserialnum << " " << data.seatnum << " " << data.date1 << " " << data.tnum << endl;
}

istream &operator >>(istream &input, airplane &data)
{
    return input >> data.pserialnum >> data.seatnum >> data.date1 >> data.tnum;
}
