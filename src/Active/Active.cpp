#include "Active.hpp"

namespace Active {
void Active::start()
{
    running = true;
    t = std::thread{ &Active::run, this };
    async_call(&Active::on_start, this);
}

void Active::stop()
{
    running = false;
    on_stop();
}

void Active::run() { run_policy(); }

void Active::run_policy()
{
    while (running) {
        if (msg_queue.size()) {
            auto fn = msg_queue.front();
            msg_queue.pop_front();
            fn();
        }
    }
}
}// namespace Active
