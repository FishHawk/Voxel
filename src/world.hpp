#ifndef WORLD_HPP
#define WORLD_HPP

#include <cstdint>

class World {
public:
    World() = default;

    void tick(double time_step);
};


#endif // WORLD_HPP