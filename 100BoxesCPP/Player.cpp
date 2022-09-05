#include "Player.hpp"
#include <iostream>
using namespace std;

Player::Player(int number) : m_foundTicket{false} {
    m_number = number;
}

Player::~Player() {
}

int Player::getNumber() const {
    return m_number;
}

void Player::setFoundTicket(bool foundTicket) {
    m_foundTicket = foundTicket;
}

bool Player::hasRightTicket() const{
    return m_foundTicket;
}