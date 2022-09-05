#pragma once
#include "Ticket.hpp"

class Box {
public:
    Box(int boxNumber, Ticket* ticket=nullptr);

    ~Box();

    int getBoxNumber() const;

    bool hasTicket() const;

    int getTicketNumber() const;

    Ticket* takeTicket();

    void giveTicket(Ticket* ticket);

private:
    int m_boxNumber;
    Ticket* m_ticket;

};