#pragma once
#include <iostream>
#include <vector>
#include "robots.h"
#include "racks.h"
#include "orders.h"

class World{

public:

 World();

  std::vector<Robot> robots;
  std::vector<Rack> racks;
  std::vector<Order> orders;


};
