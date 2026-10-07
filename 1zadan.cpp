#include <iostream>

void counting_function()
{
    static int kolvo{1};
    std::cout<< "vizvali fnkciu: "<< kolvo++ << std::endl;
}


int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}