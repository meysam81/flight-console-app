#pragma once



#ifndef FLIGHT_H
#define FLIGHT_H
class pilot;
class host;
class date;
class airplane;
class passenger;
class time;

#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
#include<alg.h>


#include "pilot.h"
#include "host.h"
#include "date.h"
#include "airplane.h"
#include "passenger.h"
#include "time.h"

using namespace std;


bool compare1(long int a, long int b); /*{
	if (a == b)
		return true;
	else
		return false;

}*/
bool compare(string a, string b); /*{
	if (a == b)
		return true;
	else
		return false;

}*/

class pilot;
class flight 
{
protected:
	string flightserial;
	string origin;
	string destination;
	int seatnumbers;
	pilot pilot1;
	date date1;
	time time1;
	airplane airplane1;
	vector <pilot> palist;
	vector <host> hostlist;
public:
	flight();
	flight(pilot pilot2 , host host2 ,host host3 , host host4 , date date2 , time time2 , string fserial , string origin1 
		, string destination1, int tseat);
	string set_flightserial();
	string set_origin();
	string set_destination();
	string get_flightserial();
	string get_origin();
	string get_destination();
	void get_imfo();
	string get_ps();
	long int get_pc();
	void clean_host(long int h);
	bool find_flight(long int h);
	bool compare_date(date date2);
	bool compare_pcode(long int code);
	bool compare_pcode2(long int code);
	long int get_pchost(int a);
};
#endif