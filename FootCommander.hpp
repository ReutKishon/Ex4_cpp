#ifndef FOOTCOMMANDER_H_
#define FOOTCOMMANDER_H_
#include "Soldier.hpp"
#include "FootSoldier.hpp"

class FootCommander : public Soldier, FootSoldier
{

public:
    FootCommander(uint player_id) : Soldier(player_id, 150, 20) {}
    void attack();

    ~FootCommander();
};

FootCommander::~FootCommander()
{
}

#endif