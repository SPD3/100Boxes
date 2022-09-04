#pragma once
#include "Box.hpp"
#include "Player.hpp"
#include <iostream>
#include <list>

class BoxesSimulation {

public:
    void run();
    
    std::list<Box> createBoxes();

    std::list<Player> createPlayers();
};