#pragma once

class StrategyBase {

public:
    virtual ~StrategyBase();

    virtual void resetForNewPlayer(int newPlayerNumber) = 0;

    virtual int getNextBox() = 0;

    virtual void reportTicketFoundInBox(int ticketNumber) = 0;
};