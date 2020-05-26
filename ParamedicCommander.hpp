#ifndef PARAMEDICCOMMANDER_H_
#define PARAMEDICCOMMANDER_H_
#include "Soldier.hpp"
#include "Paramedic.hpp"

class ParamedicCommander : public Soldier, Paramedic
{

public:
    ParamedicCommander(uint player_id) : Soldier{player_id, 200, 0} {}
    void attack();

    ~ParamedicCommander();
};

ParamedicCommander::~ParamedicCommander()
{
}

#endif