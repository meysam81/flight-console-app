#ifndef LOAD_H
#define LOAD_H

#include "airplane.h"
#include "save.h"
class passenger;
class flight;
class pilot;
class host;
class date;
class my_time;
class airplane;
class ticket;
template <class T>
class load
{
private:
    fstream loadFile;
    bool openFile(string &fileLocation);
public:
    load();
    void readFromFile(target &targetFile, vector<T> &recordVector);
};

#endif // LOAD_H
