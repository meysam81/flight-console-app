#ifndef SAVE_H
#define SAVE_H


#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;
#include <vector>
#include <chrono>
enum class target // for different types of saves that we have
{
    FLIGHT = 1,
    HOST,
    PASSENGER,
    PILOT,
    AIRPLANE,
    TICKET
};

/* becasue we are going to insert 6 different TYPE of vectors, we should use template
 * this allows us to use different tyes that we have in our program
 * for example consider the following use of writeToFIle method:
 *  * writeToFile(PILOT, vector<pilot> pilotVector), or
 *  * writeToFile(TICKET, vector<ticket> ticketVector)
 *
 *
 * for further study please refer to the following URL:
 * https://www.tutorialspoint.com/cplusplus/cpp_templates.htm
 * */
template <class T>
class save
{

private:
    fstream saveFile;

    bool openFile(string &fileLocation);
public:
    save();
    bool writeToFile(target targetFile, vector<T> &recordVector);

};

#endif // SAVE_H
