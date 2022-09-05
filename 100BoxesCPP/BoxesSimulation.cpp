#include "BoxesSimulation.hpp"
#include <iostream>
#include "Box.hpp"
#include "Player.hpp"
#include <list>

using namespace std;

BoxesSimulation() {
    createBoxes();
    createPlayers();
    randomlyAssignTicketsToBoxes();
}

~BoxesSimulation() {
    for(size_t i = 0; i < boxes.size(); ++i) {
        if(boxes[i]){
            delete boxes[i];
        }
    }

    for(size_t i = 0; i < players.size(); ++i) {
        if(players[i]){
            delete players[i]; 
        }
    }
}

void BoxesSimulation::run() {
    cout << "Running the Box Simulation!" << endl;
}

void BoxesSimulation::createBoxes() {
    for(int i = 0; i<100; ++i) {
        m_boxes.append(new Box(i));
    }
}

void BoxesSimulation::createPlayers() {
    for(int i = 0; i<100; ++i) {
        m_players.append(new Player(i));
    }
}

void BoxesSimulation::randomlyAssignTicketsToBoxes () {
    shuffle(boxes.begin(), boxes.end())
    for(int i = 0; i<100; ++i) {
        //Ticket* ticket = new Ticket(i);
        //boxes[i].
    }
}

