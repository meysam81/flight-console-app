#pragma once



#ifndef HOST_H
#define HOST_H
class flight;
class human;



#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
#include<alg.h>


#include "human.h"
#include "flight.h"




using namespace std;



class host : public human
{
protected:
	long int perssonelcodeh;
	date hiredate;
	vector<flight> worklist;
public:
	host();
	void set_hire(date);
	long int set_perssonelcodeh();
	long int get_perssonelcodeh();
	date get_hire();
	void get_imfo();
	long int get_nationalcode();
	void set_worklist(flight);

};



#endif