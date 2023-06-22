// Interface_Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Car
{
public:
    virtual void move_front() = 0;
    virtual void move_left() = 0;
    virtual void move_right() = 0;
    virtual void move_back() = 0;
    virtual void stop() = 0;
    virtual void parking() = 0;
};

int main()
{

    std::cout << "Hello World!\n";
}
