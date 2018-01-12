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





class time
{
protected:
	string hour;
	string minute;
public:
	time();
	string set_hour();
	string set_minute();
	void get_time();
};
#endif
