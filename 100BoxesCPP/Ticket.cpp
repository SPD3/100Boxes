#include "Ticket.hpp"
#include <iostream>
using namespace std;

Ticket::Ticket(int number) {
    m_ticketNumber = number;
}

int Ticket::getTicketNumber() const{
    return m_ticketNumber;
}