#include "./Serializer.hpp"


int main()
{
    Data ptr1(x);
    std::cout << ptr1->x << std::endl;
    uintptr_t ptr2 = Serializer::serialize(&ptr1);
    Data *ptr3 = Serializer::deserialize(ptr2);

    std::cout << &ptr1 << std::endl;
    std::cout << &ptr2 << std::endl;
    std::cout << ptr3 << std::endl;


    // std::cout << ptr2 << std::endl;
    // std::cout << ptr3 << std::endl;




}