#include "CycleStrategy.hpp"
#include <iostream>
using namespace std;

void CycleStrategy::resetForNewPlayer(int newPlayerNumber) {
    m_nextBoxNumber = newPlayerNumber;
}

int CycleStrategy::getNextBox() {
    return m_nextBoxNumber;
}

void CycleStrategy::reportTicketFoundInBox(int ticketNumber) {
    m_nextBoxNumber = ticketNumber;
}
