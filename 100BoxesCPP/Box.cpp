#include "Box.hpp"
#include <iostream>
using namespace std;

Box::Box(int boxNumber, Ticket* ticket) {
    m_ticket = ticket;
    m_boxNumber = boxNumber;
}

Box::~Box() {
    if (m_ticket) {
        delete m_ticket;
    }
}

int Box::getBoxNumber() const {
    return m_boxNumber;
}

bool Box::hasTicket() const {
    return m_ticket;
}

int Box::getTicketNumber() const {
    return m_ticket->getTicketNumber();
}

Ticket* Box::takeTicket() {
    Ticket* returnVal = m_ticket;
    m_ticket = nullptr;
    return returnVal;
}

void Box::giveTicket(Ticket* ticket) {
    if(m_ticket) {
        delete m_ticket;
    }
    m_ticket = ticket;
}