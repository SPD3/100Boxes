#pragma once
#include "Ticket.hpp"

class Player {
public:
    Player(int number);

    ~Player();

    int getNumber() const;

    void setTicket(Ticket* ticket);

    bool hasRightTicket();

private:
    int m_number;
    Ticket* m_ticket;
};