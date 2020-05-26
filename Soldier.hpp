#ifndef SOLDIER_H_
#define SOLDIER_H_
#include <math.h>
class Soldier
{
protected:
    uint player_id;
    uint health_points;
    uint damage;
    double distance(int x1, int x2, int y1, int y2) //(x1,y1) , (x2,y2)
    {
        return sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    }

public:
    Soldier(uint player_id, uint health_points, uint damage) : player_id(player_id), health_points(health_points), damage(damage)
    {
    }
    Soldier();
    virtual void attack();

    uint get_player_id() { return player_id; }
    uint get_health_points() { return health_points; }
    uint get_damage() { return damage; }
    void set_health_points(int health_points) { health_points = health_points; }
    void set_damage(int damage) { damage = damage; }

    ~Soldier();
};

void Soldier::attack() {}

#endif