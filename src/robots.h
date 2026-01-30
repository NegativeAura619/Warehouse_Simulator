#pragma once
#include <iostream>
class Robot
{
public:
   int posx, posy;

   Robot(int xx, int yy)
    : posx{xx}, posy{yy}
   {
    std::cout << "robots starting positions: " << posx << " " <<  posy << std::endl;
   }

};
