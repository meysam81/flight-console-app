


#include "flight.h"

using namespace std;

flight::flight() {
	flightserial = "";
	origin = "";
	destination = "";
    pilot1 = new pilot();
	date1;
	time1;
	airplane1;
}
flight::flight(pilot *pilot2, host host2 , host host3 , host host4 ,date date2,my_time time2, string fserial , string origin1 , string destination1
, int tseat) : pilot1(pilot2) , date1(date2) , time1(time2)
, flightserial(fserial) , origin(origin1) , destination(destination1) , seatnumbers(tseat)
{
	hostlist.push_back(host2);
	hostlist.push_back(host3);
	hostlist.push_back(host4);
}
string flight::set_flightserial() {
	cout << "Enter Flight's Serial Number " << endl;
	cin >> flightserial;
	return "\0";
}
string flight::set_origin() {
	cout << "Enter Flight's Origin " << endl;
	cin >> origin;
	return "\0";
}
string flight::set_destination() {
	cout << "Enter Flight's Destination " << endl;
	cin >> destination;
	return "\0";
}
string flight::get_flightserial() {
	return flightserial;
}
string flight::get_origin() {
	return origin;
}
string flight::get_destination() {
	return destination;
}
void flight::get_imfo() {
    cout<<"Pilot's Perssonelcode  :  "<<pilot1->get_perssonelcode()<<endl;
    pilot1->get_name();
	cout << "Flight's Serial Number  :  " <<flightserial<< endl;
	cout << "Flight's Date  :  ";
	date1.get_date();
	cout << "Flight's Time  :  "; 
	time1.get_time();
	cout << "Flight's Origin  :  " << origin << endl;
	cout << "Flight's Destinition  :  "<< destination <<endl;
	cout << "Airplane's Serial Number  :  "<< airplane1.get_pserialnum() <<endl;
	
}

string flight::get_ps() {
	return airplane1.get_pserialnum();
}
long int flight::get_pc() {
    return pilot1->get_perssonelcode();
}
void flight::clean_host(long int h) {
	int i;
	int w = hostlist.end() - hostlist.begin();
	for (i = 0; i < w; i++)
	{
		if (compare1( h, hostlist[i].get_perssonelcodeh()))
		{
			hostlist.erase(hostlist.begin()+i);
			cout << "This Flight Have Two Host's ....  " << endl;
		}
    }
	
}
bool flight::find_flight(long int h) 
{
	int i;
	int w = hostlist.end() - hostlist.begin();
	for (i = 0; i < w; i++)
	{
		if (compare1(h, hostlist[i].get_perssonelcodeh()))
		{
			return true;
		}
		else
			return false;
	}
	return false;
}
bool flight::compare_date(date date2) {
	if (compare(date1.get_year() , date2.get_year() ))
	{
		if (compare(date1.get_month() , date2.get_month() ))
		{
			if (compare(date2.get_day() , date1.get_day()))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool flight::compare_pcode(long int code) {
	int z = palist.end() - palist.begin();
	int i;
	for (i = 0; i < z; i++)
	{
		if (compare1(code, palist[i].get_perssonelcode()))
		{
			return true;
		}
		else
			return false;
	}
	return false;
}
bool flight::compare_pcode2(long int code) {
	int z = hostlist.end() - hostlist.begin();
	int i;
	for (i = 0; i < z; i++)
	{
		if (compare1(code, hostlist[i].get_perssonelcodeh()))
		{
			return true;
		}
		else
			return false;
	}
	return false;
}
long int flight::get_pchost(int a) {
	return hostlist[a].get_perssonelcodeh();
}



ostream &operator <<(ostream &output, const flight &data)
{
    return output << data.airplane1 << " " << data.date1 << " " << data.destination << " "
                  << data.flightserial << " " << data.origin << " "
                  << (*data.pilot1) << " " << data.seatnumbers << " " << data.time1;
}

istream &operator >>(istream &input, flight &data)
{
    return input >> data.airplane1 >> data.date1 >> data.destination
                  >> data.flightserial >> data.origin
                  >> (*data.pilot1) >> data.seatnumbers >> data.time1;
}
