#pragma once



#ifndef HUMAN_H
#define HUMAN_H



#include<iostream>
//#include<conio.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
//#include<alg.h>
class date;


#include "date.h"

using namespace std;



class human
{
protected:
	string name;
	string lname;
	long int nationalcode;
	date birthday;
public:
	human();
	string set_name();
	string set_lname();
	long int set_nationalcode();
	void set_birth(date);
	string get_name();
	string get_lname();
	long int get_nationalcode();
	date get_birth();
	void show_birth();
	void get_imfo();
};

#endif
