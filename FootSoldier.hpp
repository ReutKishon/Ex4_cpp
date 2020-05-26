
#ifndef FOOTSOLDIER_H_
#define FOOTSOLDIER_H_
#include "Soldier.hpp"

class FootSoldier : public Soldier
{

public:
    FootSoldier(int player_id) : Soldier{player_id, 100, 10} {}
    FootSoldier();
    virtual void attack();

    ~FootSoldier();
};

FootSoldier::~FootSoldier()
{
}

#endif