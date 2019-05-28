#include <chrono>
#include <spdlog/spdlog.h>

#include "world.hpp"

int main() {
    World world;

    constexpr double time_step_fix = 1.0;
    using clock = std::chrono::high_resolution_clock;
    bool quit = false;

    while (!quit) {
        auto time_start = clock::now();

        world.tick(time_step_fix);

        /* sleep to make loop have fix time */
        double time_sleep = time_step_fix - std::chrono::duration<double>(clock::now() - time_start).count();
        spdlog::info("{}", time_sleep);
        while (time_sleep >= 0) {
            time_sleep = time_step_fix - std::chrono::duration<double>(clock::now() - time_start).count();
        }
    }

    return 0;
}