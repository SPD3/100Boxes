#include <gtest/gtest.h>
#include <iostream>
#include "../BoxesSimulation.hpp"
#include "../CycleStrategy.hpp"
using namespace std;

TEST(BoxesSimulationTests, runningPrintout) {
    EXPECT_TRUE(true);

    CycleStrategy cycleStrategy;
    BoxesSimulation boxesSimulation(cycleStrategy);

    testing::internal::CaptureStdout();
    boxesSimulation.run();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "");

} 

