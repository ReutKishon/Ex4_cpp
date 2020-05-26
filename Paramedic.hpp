#ifndef PARAMEDIC_H_
#define PARAMEDIC_H_
#include <vector>
#include "Soldier.hpp"

class Paramedic : public Soldier
{

public:
    Paramedic(uint player_id, uint health_points = 100, uint damage = 0) : Soldier{player_id, health_points, damage} {}
    Paramedic();
    virtual void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    ~Paramedic();
};
void Paramedic::attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location) { return; }

Paramedic::~Paramedic()
{
}

#endif