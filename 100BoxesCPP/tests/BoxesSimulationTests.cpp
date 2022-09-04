#include <gtest/gtest.h>
#include <iostream>
#include "../BoxesSimulation.hpp"
using namespace std;

TEST(BoxesSimulationTests, runningPrintout) {
    EXPECT_TRUE(true);

    BoxesSimulation boxesSimulation;

    testing::internal::CaptureStdout();
    boxesSimulation.run();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Running the Box Simulation!\n");

} 
