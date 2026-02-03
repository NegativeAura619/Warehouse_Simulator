#pragma once
#include <iostream>
class Robot
{
public:
   int posx, posy;
   bool busy;

   Robot(int x, int y, bool busy_f)
    : posx{x}, posy{y}, busy{busy_f}
   {
   }

};

bool  isBusy const();
