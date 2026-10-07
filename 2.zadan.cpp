#include <iostream>

namespace math
{
    namespace summ
    {
        int calc(int a,int b)
        {
            return a+b;
        }
    }
    namespace vichitanie
    {
        int calc (int a,int b)
        {
            return a-b;
        }
    }
    namespace umnozh
    {
        int calc(int a,int b)
        {
            return a*b;
        }
    }
    namespace stepen
    {
        int calc(int a,int b)
        {
            int result{};
            if (b==0)
            {
                return result=1;
            }
            else if (b==1)
            {
                return result=a;
            }
            else
            {
                result=a;
                for (int i=1; i<=b;i++)
                {
                    result=result*a;
                }
                return result;
            }
        }
    }

}


int main()
{
    int a=6;
    int b=8;

    std::cout<< "a + b = "<<math::summ::calc(a,b)<<std::endl;
    std::cout<< "a - b = "<<math::vichitanie::calc(a,b)<<std::endl;
    std::cout<< "a * b = "<<math::umnozh::calc(a,b)<<std::endl;
    std::cout<< "a v stepeni b = "<<math::stepen::calc(a,b)<<std::endl;
}