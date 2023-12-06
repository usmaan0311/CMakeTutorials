#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T> // constrains to use T as integer value otherwise it through type error

T add(T a, T b)
{
return a+b;
}

int main()
{
std::cout<<"Hello World!!! this is c++20 with CMake"<<std::endl;
std::cout<<"The sum is : "<<add(7,3)<<std::endl;

return 0;
}
