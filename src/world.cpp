#include "world.h"
#include <iostream>
#include "racks.h"
#include <vector>
#include "orders.h"

World::World()
{

 robots.emplace_back(0,0);
 racks.emplace_back(5,5, "Iphone15", 100);
 orders.emplace_back(1,314, "placeholder");

Order order = createFixedOrder();
 orders.push_back(order);


}
