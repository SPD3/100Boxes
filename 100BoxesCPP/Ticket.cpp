#include "Ticket.hpp"
#include <iostream>
using namespace std;

Ticket::Ticket(int number) {
    m_ticketNumber = number;
}

int Ticket::getTicketNumber() {
    return m_ticketNumber;
}