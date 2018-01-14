
#include <fstream>
#include<iostream>
//#include<conio.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
//#include<alg.h>
#include<fstream>
#include<sstream>


class date;
#include "date.h"
class my_time;
#include "time.h"
class human;
#include "human.h"
class passenger;
#include "passenger.h"
class host;
#include "host.h"
class pilot;
#include "pilot.h"
class airplane;
#include "airplane.h"
class flight;
#include "flight.h"
class ticket;
#include "ticket.h"






vector<pilot> pilotlist;
vector<ticket> ticketlist;
vector<host> hostlist;
vector<flight> flightlist;
vector<airplane> airplanelist;
vector<host> flighthost;
vector<passenger> passengerlist;
vector<passenger> flightpassenger;
vector<date> birthday;
vector<long int> nationalcode;

using namespace std;


bool compare(string a, string b) {
    if (a == b)
        return true;
    else
        return false;

}
bool compare1(long int a, long int b) {
    if (a == b)
        return true;
    else
        return false;

}
int ticketcode(int code) {
    code++;
    return code;
}
int stringtointeger(string str) {

    int result;
    istringstream convert(str);
    if (!(convert >> result))
        throw "Can Not Convert";

    return result;
}

long int ticketserial=1000;




//int counter::count = 3000;

bool appendToFile()
{
    for (int i = 1; i <= 6; ++i) {
        fstream saveFile;
        switch (i) {
        case 1:
            saveFile.open("Flight.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : flightlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 2:
            saveFile.open("Host.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : hostlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 3:
            saveFile.open("Passenger.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : passengerlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 4:
            saveFile.open("Pilot.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : pilotlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 5:
            saveFile.open("Airplane.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : airplanelist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 6:
            saveFile.open("Ticket.txt", ios_base::app);
            if (saveFile.is_open())
            {
                for (auto i : ticketlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;

        default:
            break;
        }
    }
    cout << "Done.\n";
    return true;
}

bool saveMyFile()
{
    for (int i = 1; i <= 6; ++i) {
        fstream saveFile;
        switch (i) {
        case 1:
            saveFile.open("Flight.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : flightlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 2:
            saveFile.open("Host.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : hostlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 3:
            saveFile.open("Passenger.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : passengerlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 4:
            saveFile.open("Pilot.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : pilotlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 5:
            saveFile.open("Airplane.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : airplanelist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;
        case 6:
            saveFile.open("Ticket.txt", ios_base::out);
            if (saveFile.is_open())
            {
                for (auto i : ticketlist)
                    saveFile << i;
            }
            saveFile.flush();
            saveFile.close();
            break;

        default:
            break;
        }
    }
    cout << "Done.\n";
    return true;
}

bool loadMyFile()
{
    for (int i = 1; i <= 6; ++i) {
        fstream loadFile;
        switch (i) {
        case 1:
            loadFile.open("Flight.txt", ios_base::in);
            if (loadFile.is_open())
            {
                flight i;
                while (loadFile) {
                    loadFile >> i;
                    flightlist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;
        case 2:
            loadFile.open("Host.txt", ios_base::in);
            if (loadFile.is_open())
            {
                host i;
                while (loadFile) {
                    loadFile >> i;
                    hostlist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;
        case 3:
            loadFile.open("Passenger.txt", ios_base::in);
            if (loadFile.is_open())
            {
                passenger i;
                while (loadFile) {
                    loadFile >> i;
                    passengerlist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;
        case 4:
            loadFile.open("Pilot.txt", ios_base::in);
            if (loadFile.is_open())
            {
                pilot i;
                while (loadFile) {
                    loadFile >> i;
                    pilotlist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;
        case 5:
            loadFile.open("Airplane.txt", ios_base::in);
            if (loadFile.is_open())
            {
                airplane i;
                while (loadFile) {
                    loadFile >> i;
                    airplanelist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;
        case 6:
            loadFile.open("Ticket.txt", ios_base::in);
            if (loadFile.is_open())
            {
                ticket i;
                while (loadFile) {
                    loadFile >> i;
                    ticketlist.push_back(i);
                }
            }
            loadFile.flush();
            loadFile.close();
            break;

        default:
            break;
        }
    }
    cout << "Done.\n";
    return true;
}

int main()
{
    /*ifstream infile;
    ofstream outfile;
    infile.open("pilotlist.txt");
    outfile.open("pilotlist.txt");*/
    int code1 = 3000;
    cout << "Welcome To Our Program For Management Airport " << endl <<
            "Programmed By : " << endl << "Sajad Amiri " << endl << "Rasool Arjmand " << endl;
    int user=0;
    int user2 = 0, user3 = 0, user4 = 0;
    while (true)
    {
        cout << " Menu " << endl << "1 . Add New Element To Airport " << endl <<
                "2 . Remove Element Of Airport " << endl << "3 . Reporting " << endl <<
                "4 . Save to file (overwrite)" << endl << "5 . Load from file" << endl
             << "6.  Append to saved file\n"
             << "7 . Exit ";
        cout << "Choose From Menu " << endl;
        cin >> user;
        switch (user)
        {
        case 1:
            while (user2 != 6)
            {
                cout << "1 . Add Pilot" << endl << "2 . Add Ticket" << endl <<
                        "3 . Add Host" << endl << "4 . Add Flight" << endl << "5 . Add Airplane" << endl << "6 . back";
                cout << "Choose From Menu " << endl;
                cin >> user2;
                if (user2 == 2)
                {
                    flight flight2;
                    int i;
                    string serial;
                    int e = flightlist.end() - flightlist.begin();
                    cout << "Please Enter One Of These Serial Number  " << endl;
                    for (i = 0; i < e; i++)
                    {
                        cout << "Flight Number " << i << endl;
                        if (flightlist[i].get_pc() != 0)
                        {
                            flightlist[i].get_imfo();
                        }
                    }
                    cout << endl;
                    cin >> serial;
                    for (i = 0; i < e; i++)
                    {
                        if (compare(serial, flightlist[i].get_flightserial()))
                        {
                            flight2 = flightlist[i];
                        }

                    }
                    /*int q = airplanelist.end() - airplanelist.begin();
                    for (i = 0; i < q; i++)
                    {
                        if (compare(flight2.get_ps() , airplanelist[i].get_pserialnum() ))
                        {
                            airplanelist[i].set_tnum();
                        }
                    }*/


                    cout << "Enter Passenger  " << endl;
                    passenger passenger1;
                    passenger1.set_name();
                    passenger1.set_lname();
                    passenger1.set_fname();
                    passenger1.set_nationalcode();
                    date date1;
                    cout << "Birthday  " << endl;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    passenger1.set_birth(date1);
                    birthday.push_back(date1);
                    passengerlist.push_back(passenger1);
                    string price1;
                    cout << "Enter Ticket's Price  " << endl;
                    cin >> price1;
                    ticketserial++;
                    ticket ticket1(flight2, passenger1, price1, ticketserial);
                    ticketlist.push_back(ticket1);
                }

                else if (user2 == 1)
                {
                    pilot pilot1;
                    pilot1.set_name();
                    pilot1.set_lname();
                    pilot1.set_nationalcode();
                    pilot1.set_perssonelcode();
                    date date1;
                    cout << "Birthday  " << endl;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    pilot1.set_birth(date1);
                    birthday.push_back(date1);
                    date date2;
                    cout << "hiredate  " << endl;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    pilot1.set_hire(date2);
                    pilotlist.push_back(pilot1);
                    //list
                }




                else if (user2 == 3)
                {
                    host host1;
                    host1.set_name();
                    host1.set_lname();
                    host1.set_nationalcode();
                    host1.set_perssonelcodeh();
                    cout << "Birthday  " << endl;
                    date date1;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    host1.set_birth(date1);
                    birthday.push_back(date1);
                    cout << "Hiredate  " << endl;
                    date date2;
                    date2.set_year();
                    date2.set_month();
                    date2.set_day();
                    host1.set_hire(date2);
                    hostlist.push_back(host1);

                }


                else if (user2 == 4)
                {
                    int i;
                    host host1;
                    airplane airplane1;
                    pilot *pilot1;
                    int q = airplanelist.end() - airplanelist.begin();
                    for (i = 0; i < q; i++)
                    {
                        if (airplanelist[i].get_pserialnum() != "")
                        {
                            airplanelist[i].get_imfo();
                        }
                    }
                    cout << "Enter Airplane's Serialnumber;" << endl;
                    string serial;
                    cin >> serial;
                    for (i = 0; i < q; i++)
                    {
                        if (compare(serial, airplanelist[i].get_pserialnum()))
                        {
                            airplane1 = airplanelist[i];
                        }
                    }
                    int z = pilotlist.end() - pilotlist.begin();
                    for (i = 0; i < z; i++)
                    {
                        if (pilotlist[i].get_perssonelcode() != 0)
                        {
                            pilotlist[i].get_imfo();
                        }
                    }
                    cout << "Enter Pilot's Perssonelcode  ;" << endl;
                    long int serial2;
                    cin >> serial2;
                    for (i = 0; i < q; i++)
                    {
                        if (compare1(serial2, pilotlist[i].get_perssonelcode()))
                        {
                            pilot1 = new pilot(pilotlist[i]);
                        }
                    }


                    string fserial;
                    cout << "Enter Flight's Serial Number " << endl;
                    cin >> fserial;
                    string origin;
                    cout << "Enter Flight's Origin " << endl;
                    cin >> origin;
                    string destination;
                    cout << "Enter Flight's Destination " << endl;
                    cin >> destination;
                    cout << "Flight Date  " << endl;
                    date date1;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    cout << "Flight Time  " << endl;
                    my_time time1;
                    time1.set_hour();
                    time1.set_minute();
                    int r = hostlist.end() - hostlist.begin();
                    for (i = 0; i < r; i++)
                    {
                        if (hostlist[i].get_perssonelcodeh() != 0)
                        {
                            hostlist[i].get_imfo();
                        }
                    }
                    cout << "Enter Host's Perssonelcode  " << endl << "In Any Flights You Can Have Three Hosts  " << endl;
                    long int serial1;
                    int j = 0,y;
                    while (j != 3)
                    {
                        cin >> serial1;
                        for (i = 0; i < r; i++)
                        {
                            if (compare1(serial1, hostlist[i].get_perssonelcodeh()))
                            {
                                host1 = hostlist[i];
                                flighthost.push_back(host1);
                                j++;
                            }
                        }
                    }


                    /*passenger passenger1;
                    int y = ticketlist.end() - ticketlist.begin();
                    for (i = 0; i < y; i++)
                    {
                        if (compare(fserial, ticketlist[i].get_flserial()))
                        {
                            passenger1 = ticketlist[i].get_passenger();
                        }
                    }*/
                    int p = 0;
                    int u = ticketlist.end() - ticketlist.begin();
                    for (i = 0; i < u; i++)
                    {
                        if (compare(fserial, ticketlist[i].get_flserial()))
                        {
                            p++;
                        }
                    }
                    flight flight1(pilot1, flighthost[0], flighthost[1], flighthost[2], date1, time1, fserial, origin, destination, p);
                    flightlist.push_back(flight1);
                    for (i = 0; i < z; i++)
                    {
                        if (compare1(serial2, pilotlist[i].get_perssonelcode()))
                        {
                            pilotlist[i].set_worklist(flight1);
                        }
                    }

                    for (y = 0; y < 3; y++)
                    {
                        for (int g = 0; g < r; g++)
                        {
                            if (compare1(flight1.get_pchost(y), hostlist[g].get_perssonelcodeh()))
                            {
                                hostlist[g].set_worklist(flight1);
                            }
                        }
                    }


                }


                else if (user2 == 5)
                {
                    string pserial;
                    int seat;
                    cout << "Enter Serialnumber" << endl;
                    cin >> pserial;
                    cout << "Enter Seat Numbers  " << endl;
                    cin >> seat;
                    date date1;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    airplane airplane1(pserial, seat, date1);
                    airplanelist.push_back(airplane1);
                    //list

                }


            }
            break;

        case 2:

            while (user3 != 6)
            {
                cout << "1 . Remove Pilot" << endl << "2 . Remove Ticket" << endl << "3 . Remove Host" << endl << "4 . Remove Flight" << endl << "5 . Remove Airplane" << endl << "6 . back" << endl;
                cin >> user3;
                if (user3 == 1)
                {
                    int i;
                    long int pa;
                    int w = pilotlist.end() - pilotlist.begin();
                    for (i = 0; i < w; i++)
                    {
                        if (pilotlist[i].get_perssonelcode() != 0)
                        {
                            pilotlist[i].get_imfo();
                        }
                    }
                    cout << "Enter Pilot's Perssonelcode  " << endl;
                    cin >> pa;
                    for (i = 0; i < w; i++)
                    {
                        if (compare1(pa, pilotlist[i].get_perssonelcode()))
                        {
                            pilotlist.erase(pilotlist.begin()+i);
                        }
                    }

                    int q = flightlist.end() - flightlist.begin();
                    for (i = 0; i < q; i++)
                    {
                        if (compare1(pa, flightlist[i].get_pc()))
                        {
                            for (int j = 0; j < q; j++)
                            {
                                if (compare(flightlist[i].get_flightserial(), ticketlist[j].get_flserial()))
                                {
                                    ticketlist.erase(ticketlist.begin() + j);
                                }
                            }
                            flightlist.erase(flightlist.begin()+i);
                        }
                    }
                }

                if (user3 == 2)
                {
                    int i;
                    long int x;
                    int e = ticketlist.end() - ticketlist.begin();
                    cout << "Enter Ticket's Serial  " << endl;
                    cin >> x;
                    for (i = 0; i < e; i++)
                    {
                        if (compare1(x, ticketlist[i].return_ticketserial()))
                        {
                            ticketlist.erase(ticketlist.begin()+i);
                        }
                    }
                }
                if (user3 == 3)
                {
                    long int h;
                    int i;
                    int z = hostlist.end() - hostlist.begin();
                    for (i = 0; i < z; i++)
                    {
                        if (hostlist[i].get_perssonelcodeh() != 0)
                        {
                            hostlist[i].get_imfo();
                        }
                    }
                    cout << "Enter Pilot's Perssonelcode  " << endl;
                    cin >> h;
                    for (i = 0; i < z; i++)
                    {
                        if (compare1(h, hostlist[i].get_perssonelcodeh()))
                        {
                            hostlist.erase(hostlist.begin()+i);
                        }
                    }
                    int q = flightlist.end() - flightlist.begin();
                    for (i = 0; i < q; i++)
                    {
                        if (flightlist[i].find_flight(h))
                        {
                            flightlist[i].clean_host(h);
                        }

                    }
                }
                if (user3 == 4)
                {
                    int i;
                    string fs;
                    int l = flightlist.end() - flightlist.begin();
                    cout << "Enter Flight's Number" << endl;
                    cin >> fs;
                    for (i = 0; i < l; i++)
                    {
                        if (compare(fs, flightlist[i].get_flightserial()))
                        {
                            flightlist.erase(flightlist.begin()+i);
                        }
                    }
                    int q = ticketlist.end() - ticketlist.begin();
                    for (i = 0; i < l; i++)
                    {
                        if (compare(fs, ticketlist[i].get_flserial()))
                        {
                            ticketlist.erase(ticketlist.begin()+i);
                        }
                    }
                }
                if (user3 == 5)
                {
                    int i;
                    string ps;
                    int w = airplanelist.end() - airplanelist.begin();
                    for (i = 0; i < w; i++)
                    {
                        if (compare(ps, airplanelist[i].get_pserialnum()))
                        {
                            airplanelist.erase(airplanelist.begin()+i);
                        }
                    }
                    int q = flightlist.end() - flightlist.begin();
                    for (i = 0; i < q; i++)
                    {
                        if (compare(ps, flightlist[i].get_ps()))
                        {
                            for (int j = 0; j < q; j++)
                            {
                                if (compare(flightlist[i].get_flightserial(), ticketlist[j].get_flserial()))
                                {
                                    ticketlist.erase(ticketlist.begin()+j);
                                }
                            }
                            flightlist.erase(flightlist.begin()+i);
                        }
                    }
                }
            }
            break;

        case 3 :
            do
            {
                cout << "1 . Show Daily Flights  " << endl << "2 . Show People In Resoectively Birth Date " << endl << "3 . Show Perssenel's information  "
                     << endl << "4 . Show Perssenel's Work list  " << endl << "5 . Show information With Nationalcode  " << endl << "6 . Back" << endl;
                int user4;
                cin >> user4;
                switch (user4)
                {
                case 1:
                {
                    date date1;
                    cout << "Enter You're Date  " << endl;
                    date1.set_year();
                    date1.set_month();
                    date1.set_day();
                    int i;
                    int w = flightlist.end() - flightlist.begin();
                    for (i = 0; i < w; i++)
                    {
                        if (flightlist[i].compare_date(date1))
                        {
                            if (flightlist[i].get_flightserial() != "")
                            {
                                flightlist[i].get_imfo();
                            }
                        }
                    }
                }
                    break;
                    //az koochek tar be bozorg tar
                case 2:
                {
                    int w = birthday.end() - birthday.begin();
                    int q = passengerlist.end() - passengerlist.begin();
                    int e = pilotlist.end() - pilotlist.begin();
                    int z = hostlist.end() - hostlist.begin();
                    int i, j;
                    for (i = 1; i < w; i++)
                    {
                        date birthday1 = birthday[i];
                        for (j = i; j > 0; j--)
                        {
                            date birthday2 = birthday[j - 1];
                            int a = stringtointeger(birthday1.get_year());
                            int b = stringtointeger(birthday1.get_month());
                            int c = stringtointeger(birthday1.get_day());
                            int d = stringtointeger(birthday2.get_year());
                            int f = stringtointeger(birthday2.get_month());
                            int g = stringtointeger(birthday2.get_day());
                            if (a > d)
                            {
                                break;
                            }
                            else if (a == d && b > f)
                            {
                                break;
                            }
                            else if (a == d && b == f && c > g)
                            {
                                break;
                            }

                            birthday[j] = birthday[j - 1];

                        }

                        birthday[j] = birthday1;

                    }

                    for (i = 0; i < w; i++)
                    {
                        date birthday1 = birthday[i];
                        int a = stringtointeger(birthday1.get_year());
                        int b = stringtointeger(birthday1.get_month());
                        int c = stringtointeger(birthday1.get_day());


                        //chetor kari konam age to ye for peyda shod dige soragh badi ha nare


                        for (j = 0; j < q; j++)
                        {
                            date birthday2 = passengerlist[j].get_birth();
                            int d = stringtointeger(birthday2.get_year());
                            int f = stringtointeger(birthday2.get_month());
                            int g = stringtointeger(birthday2.get_day());
                            if (a == d && b == f && c == g)
                            {
                                passengerlist[j].get_info();
                                break;
                            }

                        }
                        for (j = 0; j < e; j++)
                        {
                            date birthday2 = pilotlist[j].get_birth();
                            int d = stringtointeger(birthday2.get_year());
                            int f = stringtointeger(birthday2.get_month());
                            int g = stringtointeger(birthday2.get_day());
                            if (a == d && b == f && c == g)
                            {
                                pilotlist[j].get_imfo();
                                break;
                            }
                        }
                        for (j = 0; j < z; j++)
                        {
                            date birthday2 = hostlist[j].get_birth();
                            int d = stringtointeger(birthday2.get_year());
                            int f = stringtointeger(birthday2.get_month());
                            int g = stringtointeger(birthday2.get_day());
                            if (a == d && b == f && c == g)
                            {
                                hostlist[j].get_imfo();
                                break;
                            }
                        }
                    }
                }
                    break;

                    //nationalcode
                case 3:
                {
                    int toulePilot = pilotlist.end() - pilotlist.begin();
                    int touleHost = hostlist.end() - hostlist.begin();
                    int i, j;
                    long int n;

                    for (i = 0; i < toulePilot; i++)
                    {
                        n = pilotlist[i].get_nationalcode();
                        nationalcode.push_back(n);
                    }
                    for (i = 0; i < touleHost; i++)
                    {
                        n = hostlist[i].get_nationalcode();
                        nationalcode.push_back(n);
                    }
                    int s = nationalcode.end() - nationalcode.begin();
                    for (i = 0; i < s; i++)
                    {
                        n = nationalcode[i];
                        for (j = i; j > 0; j--)
                        {
                            if (n > nationalcode[j - 1])
                                break;
                            nationalcode[j] = nationalcode[j - 1];
                        }
                        nationalcode[j] = n;
                    }
                    for (i = 0; i < s; i++)
                    {
                        long int a = nationalcode[i];
                        for (j = 0; j < toulePilot; j++)
                        {
                            long int b = pilotlist[j].get_nationalcode();
                            if (a == b)
                            {
                                pilotlist[j].get_imfo();
                            }
                        }
                        for (j = 0; j < touleHost; j++)
                        {
                            long int b = hostlist[j].get_nationalcode();
                            if (a == b)
                            {
                                hostlist[j].get_imfo();
                            }
                        }
                    }


                }
                    break;


                case 4:
                {
                    long int pcode;
                    cout << "Enter Perssonelcode   " << endl;
                    cin >> pcode;
                    int i;
                    int z = flightlist.end() - flightlist.begin();
                    for (i = 0; i < z; i++)
                    {
                        if (flightlist[i].compare_pcode(pcode))
                        {
                            cout << "This perssonelcode Belong To pilot  " << endl;
                            flightlist[i].get_imfo();
                        }
                        else if (flightlist[i].compare_pcode2(pcode))
                        {
                            cout << "This Perssonelcode Belong To Host   " << endl;
                            flightlist[i].get_imfo();
                        }
                    }
                }
                    break;
                case 5:
                {
                    long int ncode;
                    int i;
                    int q = passengerlist.end() - passengerlist.begin();
                    cout << "Please Enter Nationalcode  " << endl;
                    cin >> ncode;
                    for (i = 0; i < q; i++)
                    {
                        if (compare1(ncode, passengerlist[i].get_nationalcode()))
                        {
                            passengerlist[i].get_info();
                        }
                    }
                    int w = pilotlist.end() - pilotlist.begin();
                    for (i = 0; i < w; i++)
                    {
                        if (compare1(ncode, pilotlist[i].get_nationalcode()))
                        {
                            pilotlist[i].get_imfo();
                        }

                    }

                    int e = hostlist.end() - hostlist.begin();
                    for (i = 0; i < e; i++)
                    {
                        if (compare1(ncode, hostlist[i].get_nationalcode()))
                        {
                            pilotlist[i].get_imfo();
                        }
                    }
                }
                    break;
                default:
                    break;
                }
            }while (user4 < 6 && user4 > 0);
            break;


        case 4:
            saveMyFile();
            break;
        case 5:
            loadMyFile();
            break;
        case 6:
            appendToFile();
            break;
        case 7:
            exit(0);
            break;
        default:
            break;

            //**********************bakhsh 4 gozareshgiri tashih shavad**************


        }



    }
    //	_getch();
}

