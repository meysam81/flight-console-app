#pragma once


#ifndef AIRPLANE_H
#define AIRPLANE_H
class date;

#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
#include<alg.h>

#include "date.h"

using namespace std;



class airplane
{
protected:
	string pserialnum;
	int seatnum;
	date date1;
	int tnum;
public:
	airplane();
	airplane(string pserial , int seat , date date2);
	string set_pserialnum();
	int set_seatnum();
	string get_pserialnum();
	int get_seatnum();
	void get_imfo();
	void set_tnum();
	void get_tnum();
};
#endif