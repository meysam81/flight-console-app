#pragma once




#ifndef PILOT_H
#define PILOT_H
class human;

#include<iostream>
//#include<conio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
//#include<alg.h>


#include "human.h"
#include "flight.h"
class flight;




using namespace std;

//class flight;
class pilot : public human
{
protected:
	long int perssonelcode;
	date hiredate;
	vector<flight> worklist;
public:
	pilot();
	void set_hire(date);
	date get_hire();
	long int set_perssonelcode();
	long int get_perssonelcode();
	void get_imfo();
	void get_worklist();
	long int get_nationalcode();
	void set_worklist(flight);


};



#endif
