#pragma once

class Ticket {

public:
    Ticket(int number);

    int getTicketNumber() const;

private:
    int m_ticketNumber;
};