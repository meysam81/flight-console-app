#pragma once



#ifndef PASSENGER_H
#define PASSENGER_H
class human;



#include<iostream>
//#include<conio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
//#include<alg.h>

#include "human.h"


using namespace std;



class passenger : public human
{
protected:
	string fname;
public:
	passenger();
	string set_fname();
	string get_fname();
	void get_info();
	long int get_nationalcode();

    friend ostream &operator <<(ostream &output, const passenger &data);
    friend istream &operator >>(istream &input, passenger &data);

};
ostream &operator <<(ostream &output, const passenger &data);
istream &operator >>(istream &input, passenger &data);

#endif
