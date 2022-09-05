#include "Player.hpp"
#include <iostream>
using namespace std;

Player::Player(int number) {
    m_number = number;
    m_ticket = nullptr;
}

Player::~Player() {
    if(m_ticket) {
        delete m_ticket;
    }
}

int Player::getNumber() const {
    return m_number;
}

void Player::setTicket(Ticket* ticket) {
    if (m_ticket) {
        delete m_ticket;
    }
    m_ticket = ticket;
}

bool Player::hasRightTicket() {
    if(m_ticket) {
        return m_ticket->getTicketNumber() == m_number;
    }
    return false;
}