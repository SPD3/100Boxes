#pragma once
#include "Box.hpp"
#include "Player.hpp"
#include <iostream>
#include <vector>
#include "StrategyBase.hpp"

class BoxesSimulation {

public:
    BoxesSimulation(StrategyBase& strategy);

    ~BoxesSimulation();

    bool run();
    
private:
    void createBoxes();

    void createPlayers();

    void randomlyAssignTicketsToBoxes();

    Box* getBoxByNumber(int boxNumber);

    std::vector<Box*> m_boxes;

    std::vector<Player*> m_players;

    StrategyBase& m_strategy;
};