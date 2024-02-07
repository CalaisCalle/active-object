# CMake Template

Whenever I get back into C++, I always end up wanting to use CMake as my build system (it's what I'm used to, don't judge me).
The problem is: I'm not exactly great with CMake.
As a consequence, the first thing I have to do with every project is a lot of googling to understand cmake again.

There are existing CMake templates out there (e.g. Jason Turner's), but when I wrote this I was just starting out and found them hard to pick through at times.
I also wanted to understand exactly what was going on in these templates, without relying too much on those prior templates.
Plus, I have a weird hangup about using external libraries which has somehow managed to extend its way to templates:
if I didn't make it, I don't want it.

This gets very irritating when there's a library that does what I want to do 100x better than my s***** implementation, but I get stubborn.

So there are two reasons for this template to exist:

 1. To give me a basic starting point for CMake/C++ projects (and I mean REALLY basic)
 2. To act as something of a reminder on how to set up CMake projects.

I fully expect this template to get more complex with time as I find things in other projects I find useful.
For now, this should act as a reasonable jumping-off point.

## Things to do:

 1. Import external libraries (e.g. GTEST)
 2. Set up basic tests
 3. (maybe) practice some CI/CD stuff using this repo and GitHub Actions
   - This one is really a priority: I don't imagine I'll get to a point where this will be useful anytime soon

## Acknowledgements

Just to quickly note: I stole the clang-format file from Jason Turner, and I use his template as a reference a lot of the time.