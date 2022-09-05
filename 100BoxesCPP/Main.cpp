#include <iostream>
#include "BoxesSimulation.hpp"
#include "CycleStrategy.hpp"
using namespace std;

int main() {
    CycleStrategy cycleStrategy;
    BoxesSimulation boxesSimulation(cycleStrategy);

    size_t successes = 0;
    const size_t totalAttempts = 10000;

    for (size_t i = 0; i < totalAttempts; ++i){
        if(boxesSimulation.run()) {
            ++successes;
        }
    }
    cout << "Sucesses: " << successes << endl;
    cout << "Total Attempts: " << totalAttempts << endl;
    cout << "Rate: " << float(successes) / totalAttempts * 100 << "%" << endl;

}