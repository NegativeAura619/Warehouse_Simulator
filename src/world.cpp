#include "world.h"
#include <iostream>
#include "racks.h"
#include <vector>


World::World()
{

 robots.emplace_back(0,0);

 racks.emplace_back(5,5, "Iphone15", 100);

}
