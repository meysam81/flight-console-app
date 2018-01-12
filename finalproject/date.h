#pragma once


#ifndef DATE_H
#define DATE_H

#include<iostream>
//#include<conio.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
//#include<alg.h>


using namespace std;




class date
{
protected:
	string year;
	string month;
	string day;
public:
	date();
	string set_year();
	string set_month();
	string set_day();
	void get_date();
	string get_year();
	string get_month();
	string get_day();

    friend ostream &operator <<(ostream &output, const date &data);
    friend istream &operator >>(istream &input, date &data);

};
ostream &operator <<(ostream &output, const date &data);
istream &operator >>(istream &input, date &data);
#endif
