#pragma once
#include "Box.hpp"
#include "Player.hpp"
#include <iostream>
#include <vector>

class BoxesSimulation {

public:
    BoxesSimulation();

    ~BoxesSimulation();

    void run();
    
private:
    void createBoxes();

    void createPlayers();

    void randomlyAssignTicketsToBoxes();

    std::vector<Box*> m_boxes;

    std::vector<Player*> m_players;
};