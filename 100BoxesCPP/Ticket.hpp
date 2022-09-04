#pragma once

class Ticket {

public:
    Ticket(int number);

    int getTicketNumber();

private:
    int m_ticketNumber;
};