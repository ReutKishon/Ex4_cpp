#ifndef FOOTCOMMANDER_H_
#define FOOTCOMMANDER_H_
#include <vector>
#include "Soldier.hpp"
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier
{

public:
    FootCommander(uint player_id, uint health_points =150,uint damage =20) : FootSoldier(player_id, health_points, damage) {}
    void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    ~FootCommander();
};

void FootCommander::attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location) { return; }

FootCommander::~FootCommander()
{
}

#endif