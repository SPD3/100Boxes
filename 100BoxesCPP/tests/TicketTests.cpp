#include <gtest/gtest.h>
#include <iostream>
#include "../Ticket.hpp"
using namespace std;

TEST(BoxesSimulationTests, createTicket) {

    Ticket ticket(5);

    EXPECT_EQ(ticket.getTicketNumber(), 5);
}