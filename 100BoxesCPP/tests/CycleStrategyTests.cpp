#include <gtest/gtest.h>
#include <iostream>
#include "../CycleStrategy.hpp"
using namespace std;

TEST(CycleStrategyTests, createPlayer) {
    CycleStrategy cycleStrategy;

    cycleStrategy.resetForNewPlayer(4);
    EXPECT_EQ(cycleStrategy.getNextBox(), 4);
    cycleStrategy.reportTicketFoundInBox(17);
    EXPECT_EQ(cycleStrategy.getNextBox(), 17);

}