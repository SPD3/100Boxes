#include <gtest/gtest.h>
#include <iostream>
#include "../BoxesSimulation.hpp"
using namespace std;

TEST(BoxesSimulationTests, runningPrintout) {
    EXPECT_TRUE(true);

    BoxesSimulation boxesSimulation;
    boxesSimulation.run();
} 
