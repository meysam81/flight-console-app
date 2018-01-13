





#include "ticket.h"


using namespace std;


ticket::ticket()
{

}

ticket::ticket(flight flight2, passenger passenger2, string price1,long int code) : flight1(flight2), passenger1(passenger2), price(price1)
 , ticketserial(code)
{
}
string ticket::set_price(){
	cout<<"Enter Ticket's Price "<<endl;
	cin>>price;
	return "\0";
}
long int ticket::return_ticketserial() {
	return ticketserial;
}
string ticket::get_price(){
	return price;
}
string ticket::get_flserial() {
	return flight1.get_flightserial();
}
passenger ticket::get_passenger() {
    return passenger1;
}
ostream &operator <<(ostream &output, const ticket &data)
{
    return output << data.airplane1 << " " << data.flight1 << " "
                  << data.passenger1 << " " << data.price << " "
                  << data.ticketserial;
}

istream &operator >>(istream &input, ticket &data)
{
    return input >> data.airplane1 >> data.flight1
                 >> data.passenger1 >> data.price
                 >> data.ticketserial;
}
