#include <gtest/gtest.h>
#include <iostream>
#include "../Player.hpp"
using namespace std;

TEST(PlayerTests, createPlayer) {
    Player player(1);

    EXPECT_EQ(player.getNumber(), 1);
}

TEST(PlayerTests, setTicket) {
    Player player(1);
    EXPECT_FALSE(player.hasRightTicket());

    Ticket* ticket = new Ticket(3);
    player.setTicket(ticket);
    EXPECT_FALSE(player.hasRightTicket());

    ticket = new Ticket(1);
    player.setTicket(ticket);
    EXPECT_TRUE(player.hasRightTicket());

}