#ifndef SOLIDER_H_
#define SOLIDER_H_

class Solider
{
private:
    int initial_health_points;
    int damage_per_activity; //?
public:
    Solider(int health_points);
    ~Solider();
};

Solider::Solider(int health_points)
{
    initial_health_points = health_points;
}

Solider::~Solider()
{
}

#endif