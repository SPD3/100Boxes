#pragma once
#include "StrategyBase.hpp"

class CycleStrategy : public StrategyBase {

public:
    virtual void resetForNewPlayer(int newPlayerNumber) override;

    virtual int getNextBox() override;

    virtual void reportTicketFoundInBox(int ticketNumber) override;
    
private:
    int m_nextBoxNumber;
};