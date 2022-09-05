#pragma once
#include "StrategyBase.hpp"

class CycleStrategy : public StrategyBase {

    virtual void resetForNewPlayer(int newPlayerNumber) override;

    virtual int getNextBox() override;

    virtual void reportTicketFoundInBox(int ticketNumber) override;
    
};