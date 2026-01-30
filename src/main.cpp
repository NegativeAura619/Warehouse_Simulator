#include <iostream>
#include <string>
#include "robots.h"
#include "racks.h"
#include "world.h"
#include <vector>

int main()

{
std::cout  << "Warehouse Simulator Starting... \n" << "System Online \n" <<std::endl;

World world;

std::cout << "Robots avalible: " << world.robots.size() << "\n";
std::cout << "First robot posiiton: "
          << world.robots[0].posx << ","
          << world.robots[0].posy << "\n";

std::cout << "Racks Avalible on position: " << world.racks[0].rack_x << ","
          << world.racks[0].rack_y << "\n"
          << "Item loaded on rack 0: " << world.racks[0].itemName << std::endl
          << "Item quantity on rack 0: " << world.racks[0].itemQuantity << std::endl;







return 0;

}
