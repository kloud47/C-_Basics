//Enumerator: (Enum) it is a user defined data type
#include<iostream>

enum Example : char
{
    A ,B , C //Enumeration occurs ,a = 0 ,b = 1 ,c = 2:
};


int main(){

    Example value = B;
    std::cout<< value <<std::endl;
    std::cout<< A + C <<std::endl;

    int ok = (A|B)|C;
    std::cout<< ok <<std::endl;
}