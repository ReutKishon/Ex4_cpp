#ifndef FOOTCOMMANDER_H_
#define FOOTCOMMANDER_H_
#include <vector>
#include "Soldier.hpp"
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier
{

public:
    FootCommander(uint player_id) : FootSoldier(player_id, 150, 20) {}
    void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    ~FootCommander();
};

void FootCommander::attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location) { return; }

FootCommander::~FootCommander()
{
}

#endif