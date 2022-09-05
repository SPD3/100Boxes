#pragma once
#include "Ticket.hpp"

class Player {
public:
    Player(int number);

    ~Player();

    int getNumber() const;

    void setFoundTicket(bool foundTicket);

    bool hasRightTicket() const;

private:
    int m_number;
    bool m_foundTicket;
};