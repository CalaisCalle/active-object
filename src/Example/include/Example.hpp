#ifndef EXAMPLE_HPP_
#define EXAMPLE_HPP_

#include "Active.hpp"

class Example : public Active::Active
{
public:
    void run_example();

private:
    void on_start() override;
    void on_stop() override;

    void action(int a, int b);
};
#endif