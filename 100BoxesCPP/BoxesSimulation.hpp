#pragma once
#include "Box.hpp"
#include "Player.hpp"
#include <iostream>
#include <list>

class BoxesSimulation {

public:
    BoxesSimulation();

    ~BoxesSimulation();

    void run();
    
private:
    void createBoxes();

    void createPlayers();

    void randomlyAssignTicketsToBoxes();

    std::list<Box*> boxes;

    std::list<Player*> players;
};