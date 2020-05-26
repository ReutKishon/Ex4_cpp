
#ifndef SNIPER_H_
#define SNIPER_H_
#include "Soldier.hpp"

class Sniper : public Soldier
{

public:
    Sniper(uint player_id) : Soldier{player_id, 100, 50} {}
    Sniper();
    virtual void attack();
    ~Sniper();
};

Sniper::~Sniper()
{
}

#endif