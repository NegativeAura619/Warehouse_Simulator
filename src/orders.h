#include <iostream>
#include <string>



class Order
{
public:

bool isComplete;
int quantity;
int controlNumber;
std::string productName;

  Order(int quantity_f, int controlNumber_f, const std::string& productName_f)
        : quantity{quantity_f},
          controlNumber{controlNumber_f},
          productName(productName_f),
          isComplete{false}
{

}




};


