#ifndef PARAMEDIC_H_
#define PARAMEDIC_H_
#include "Soldier.hpp"

class Paramedic : public Soldier
{

public:
    Paramedic(uint player_id) : Soldier{player_id, 100, 0} {}
    Paramedic();
    virtual void attack();

    ~Paramedic();
};

Paramedic::~Paramedic()
{
}

#endif