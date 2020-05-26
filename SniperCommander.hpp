
#ifndef SNIPERCOMMANDER_H_
#define SNIPERCOMMANDER_H_
#include "Soldier.hpp"
#include "Sniper.hpp"

class SniperCommander : public Soldier, Sniper
{

public:
    SniperCommander(uint player_id) : Soldier{player_id, 120, 100} {}
    void attack();

    ~SniperCommander();
};

SniperCommander::~SniperCommander()
{
}

#endif