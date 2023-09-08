#include <iostream>
#include <string>
#include <iomanip>

class Parent {
    Parent();
};

class Child2 : public Parent
{
    public: 
     int x = 2;
};

int main()
{
    Child2 *d;
    Parent *a = (Parent*)(d);
    printf("%d",a->x);

}