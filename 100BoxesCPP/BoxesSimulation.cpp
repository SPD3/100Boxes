#include "BoxesSimulation.hpp"
#include <iostream>
#include "Box.hpp"
#include "Player.hpp"
#include <list>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>

using namespace std;

BoxesSimulation::BoxesSimulation(StrategyBase& strategy) : m_strategy{strategy}{
    createBoxes();
    createPlayers();
    randomlyAssignTicketsToBoxes();
}

BoxesSimulation::~BoxesSimulation() {
    for(Box* box : m_boxes) {
        delete box;
    }
    for(Player* player : m_players) {
        delete player;
    }
}

bool BoxesSimulation::run() {
    cout << "Running the Box Simulation!" << endl;
    for(Player* player : m_players) {
        m_strategy.resetForNewPlayer(player->getNumber());
        for(int i = 0; i < 50; ++i) {
            int nextBoxNumber = m_strategy.getNextBox();
            Box* nextBox = getBoxByNumber(nextBoxNumber);
            if (nextBox->getTicketNumber() == player->getNumber()) {
                player->setFoundTicket(true);
            }
            m_strategy.reportTicketFoundInBox(nextBox->getTicketNumber());
        }
    }
    for(Player* player : m_players) {
        if(!player->hasRightTicket()) {
            return false;
        }
    }
    return true;
}

Box* BoxesSimulation::getBoxByNumber(int boxNumber) {
    for(Box* box : m_boxes) {
        if(box->getTicketNumber() == boxNumber) {
            return box;
        }
    }

    return nullptr;
}

void BoxesSimulation::createBoxes() {
    for(int i = 0; i<100; ++i) {
        m_boxes.push_back(new Box(i));
    }
}

void BoxesSimulation::createPlayers() {
    for(int i = 0; i<100; ++i) {
        m_players.push_back(new Player(i));
    }
}

void BoxesSimulation::randomlyAssignTicketsToBoxes () {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(m_boxes.begin(), m_boxes.end(), default_random_engine(seed));
    for(int i = 0; i<100; ++i) {
        Ticket* ticket = new Ticket(i);
        m_boxes[i]->giveTicket(ticket);
    }
}

