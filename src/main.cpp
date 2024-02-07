#include <functional>
#include <iostream>
#include <queue>
#include <thread>
#include <vector>

#include "Example.hpp"


int main()
{
    using namespace std::chrono_literals;
    Example example{};

    example.start();

    std::this_thread::sleep_for(10000ms);

    example.stop();

    return 0;
}