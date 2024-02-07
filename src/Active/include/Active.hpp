#ifndef ACTIVE_HPP_
#define ACTIVE_HPP_

#include <atomic>
#include <deque>
#include <functional>
#include <thread>

namespace Active {

class Active
{
public:
    void start();
    void stop();

    virtual void on_start() = 0;
    virtual void on_stop() = 0;

protected:
    template<typename Callable, typename... Args>
    void async_call(Callable &&fn, Args... args)
    {
        msg_queue.emplace_back([&fn, &args...]() { fn(std::forward(args)...); });
    }

private:
    std::deque<std::function<void()>> msg_queue{};
    void run();

    virtual void run_policy();
    std::thread t{};
    std::atomic_bool running{ false };
};

}// namespace Active
#endif