#include "save.h"
template <class T>
bool save<T>::openFile(string &fileLocation)
{
    saveFile.open(fileLocation, // open file from the specified location
                  ios_base::out); // write to file; overwrite if already there
    return saveFile.is_open();
}
template <class T>
save<T>::save() // constructor as you may already know
{

}
template <class T>
bool save<T>::writeToFile(target &targetFile, vector<T> &recordVector)
{

    string titleOfFile;
    bool write = false;
    switch (targetFile) {
    case target::FLIGHT:
        titleOfFile = "Flight.txt";
        write = true;
        break;
    case target::HOST:
        titleOfFile = "Host.txt";
        write = true;
        break;
    case target::PASSENGER:
        titleOfFile = "Passenger.txt";
        write = true;
        break;
    case target::PILOT:
        titleOfFile = "Pilot.txt";
        write = true;
        break;
    case target::AIRPLANE:
        titleOfFile = "Airplane.txt";
        write = true;
        break;
    case target::TICKET:
        titleOfFile = "Ticket.txt";
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
