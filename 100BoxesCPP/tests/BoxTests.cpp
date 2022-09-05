#include <gtest/gtest.h>
#include <iostream>
#include "../Box.hpp"
#include "../Ticket.hpp"
using namespace std;

TEST(BoxTests, createBox) {
    Box box(1);
    EXPECT_EQ(box.getBoxNumber(), 1);

    Ticket* ticket = new Ticket(3);
    Box box2(2, ticket);
    EXPECT_EQ(box2.getBoxNumber(), 2);
    cout << "finishing createbox test" << endl;
}

TEST(BoxTests, hasTicket) {
    Ticket* ticket = new Ticket(3);
    Box box(2, ticket);

    EXPECT_TRUE(box.hasTicket());

    Box box2(2);

    EXPECT_FALSE(box2.hasTicket());
}

TEST(BoxTests, ticketNumberFromBox) {
    Ticket* ticket = new Ticket(3);
    Box box(2, ticket);

    EXPECT_EQ(box.getTicketNumber(), 3);

}

TEST(BoxTests, giveTicketToBox) {
    Ticket* ticket = new Ticket(3);
    Box box(2);
    box.giveTicket(ticket);

    EXPECT_EQ(box.getTicketNumber(), 3);

}

