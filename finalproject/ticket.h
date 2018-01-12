#pragma once




#ifndef TICKET_H
#define TICKET_H
class pilot;
class host;
class date;
class airplane;
class passenger;
class flight;
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
#include "flight.h"
#include "time.h"

using namespace std;



class ticket 
{
protected:
	string price;
	flight flight1;
	passenger passenger1;
	airplane airplane1;
	long int ticketserial;
public:
	ticket (flight flight2 , passenger passenger2 , string price1 ,long int code);
	string set_price();
	string get_price();
	long int return_ticketserial();
	string get_flserial();
	passenger get_passenger();
	
};
#endif