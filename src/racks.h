#pragma once
#include <iostream>
#include <string>

class Rack
{
public:
     int rack_x;
     int rack_y;
     int itemQuantity;
     std::string itemName;

     Rack(int y, int x, const std::string& name, int quantity)
     : rack_x{x}, rack_y{y}, itemQuantity{quantity}, itemName{name}
     {}





};

