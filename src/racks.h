#pragma once
#include <iostream>

class Rack
{
public:
     int rack_x, rack_y;

     Rack(int y, int x)
     : rack_x{x}, rack_y{y}
     {
     std::cout << "starting racks positions: " << rack_x << " " << rack_y << std::endl;
     }



};

