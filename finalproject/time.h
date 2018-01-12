#pragma once


#ifndef TIME_H
#define TIME_H



#include<iostream>
//#include<conio.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
//#include<alg.h>

using namespace std;





class my_time
{
protected:
	string hour;
	string minute;
public:
    my_time();
	string set_hour();
	string set_minute();
	void get_time();
    friend ostream &operator <<(ostream &output, const my_time &data);
    friend istream &operator >>(istream &input, my_time &data);

};
ostream &operator <<(ostream &output, const my_time &data);
istream &operator >>(istream &input, my_time &data);
#endif
