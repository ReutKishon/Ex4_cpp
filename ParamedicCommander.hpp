#ifndef PARAMEDICCOMMANDER_H_
#define PARAMEDICCOMMANDER_H_
#include <vector>
#include "Soldier.hpp"
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic
{

public:
    ParamedicCommander(uint player_id, uint health_points = 200, uint damage = 0) : Paramedic{player_id, health_points, damage} {}
    void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    ~ParamedicCommander();
};
void ParamedicCommander::attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location) { return; }

ParamedicCommander::~ParamedicCommander()
{
}

#endif