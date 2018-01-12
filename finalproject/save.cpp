#include "save.h"
template <class T>
bool save<T>::openFile(string &fileLocation)
{
    saveFile.open(fileLocation, // open file from the specified location
                  ios_base::out); // write to file; overwrite if already there
    return saveFile.is_open();
}
template <class T>
save<T>::save(bool overWrite) : overWrite(overWrite) // constructor as you may already know
{

}
template <class T>
bool save<T>::writeToFile(target &targetFile, vector<T> &recordVector)
{
    // the use of 'auto' keyword is ONLY allowed in c++11 and the following code gets the current time
    auto currentTime = chrono::system_clock::now(); // to be used in saving file

    string titleOfFile = to_string(chrono::system_clock::to_time_t(currentTime));
    bool write = false;
    switch (targetFile) {
    case target::FLIGHT:
        titleOfFile = "Flight-" + titleOfFile;
        write = true;
        break;
    case target::HOST:
        titleOfFile = "Host-" + titleOfFile;
        write = true;
        break;
    case target::PASSENGER:
        titleOfFile = "Passenger-" + titleOfFile;
        write = true;
        break;
    case target::PILOT:
        titleOfFile = "Pilot-" + titleOfFile;
        write = true;
        break;
    case target::PLANE:
        titleOfFile = "Plane-" + titleOfFile;
        write = true;
        break;
    case target::TICKET:
        titleOfFile = "Ticket-" + titleOfFile;
        write = true;
        break;
    default:
        cout << "Not a good choice!\n";
        break;
    }
    if (write)
    {
        if (openFile(titleOfFile)) // if the file is opened
        {
            for (auto i : recordVector) // it's like a for_each statement
                saveFile << i << endl; // write to file
            saveFile.flush(); // write from buffer to disk
            saveFile.close(); // close the file to avoid leakage
        }
        else
        {
            cout << "File not open!\n";
            return false;
        }
    }
}
