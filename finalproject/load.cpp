#include "load.h"

template <class T>
bool load<T>::openFile(string &fileLocation)
{
    loadFile.open(fileLocation, // open file from the specified location
                  ios_base::in); // write to file; overwrite if already there
    return loadFile.is_open();
}
template <class T>
load<T>::load()
{

}
template <class T>
void load<T>::readFromFile(target &targetFile, vector<T> &recordVector)
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
            while (loadFile) // it's like a for_each statement
            {
                T tmp;
                loadFile >> tmp;
                recordVector.push_back(tmp);
            }
            loadFile.close(); // close the file to avoid leakage
        }
        else
        {
            cout << "File not open!\n";
            return false;
        }
    }
}

