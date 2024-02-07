#include "Example.hpp"
#include <iostream>
#include <thread>

void Example::on_start() { std::cout << "Example Starting...\n"; }

void Example::on_stop() { std::cout << "Example stopping...\n"; }

void Example::run_example()
{
    for (unsigned i{ 0 }; i < 10; ++i) { async_call(&Example::action, this, i, i + 1); }
}

void Example::action(int a, int b)
{
    using namespace std::chrono_literals;
    std::cout << a + b << std::endl;
    std::this_thread::sleep_for(1000ms);
}