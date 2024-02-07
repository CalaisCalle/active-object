# Active Object

This is the result of trying to replicate something I saw at work.
The active object has a queue of function objects that are executed by the running policy.
There's also a method, `dispatch_async` that can be used to add any function to the queue.

## What's the Point?

I've not used a thread-safe queue here (I can change that in a future update), but the Active object can be used to quickly create multiple objects that need to asynchronously access/modify data in a thread-safe way.
For instance: a tcp server may need to send out messages to clients without interrupting execution in the main thread.

Beyond that, the point was to understand something that was new to me in C++.
I'm honestly amazed it works at all (although it will probably break at some point).


## Things to do:

 1. Import external libraries (e.g. GTEST)
 2. Set up basic tests
 3. (maybe) practice some CI/CD stuff using this repo and GitHub Actions
   - This one is really a priority: I don't imagine I'll get to a point where this will be useful anytime soon

## Acknowledgements

Just to quickly note: I stole the clang-format file from Jason Turner, then modified it to suit me tbh.