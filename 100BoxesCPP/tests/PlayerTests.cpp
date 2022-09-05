#include <gtest/gtest.h>
#include <iostream>
#include "../Player.hpp"
using namespace std;

TEST(PlayerTests, createPlayer) {
    Player player(1);

    EXPECT_EQ(player.getNumber(), 1);
}

TEST(PlayerTests, setFoundTicket) {
    Player player(1);
    EXPECT_FALSE(player.hasRightTicket());

    player.setFoundTicket(true);
    EXPECT_TRUE(player.hasRightTicket());
}