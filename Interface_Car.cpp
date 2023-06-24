// Interface_Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
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

class BMW :public Car
{
private:
    string horsepower;
    string capacity;
    string pressure;
    string number;
public:
    BMW()
    {
        this->capacity = "30";
        this->horsepower = "70";
        this->pressure = "60";
        this->number = "AM23456";
    }
    void move_front() { cout << "Car move front with horsepower = " << this->horsepower << endl; }
    void move_left() { cout << "Car move left with horsepower = " << this->horsepower << endl; }
    void move_right() { cout << "Car move right with horsepower = " << this->horsepower << endl; }
    void move_back() { cout << "Car move back with pressure = " << this->pressure << endl; }
    void stop() { cout << "Car stop with capacity = " << this->capacity << endl; }
    void parking() { cout << "Car parking with number = " << this->number << endl; }

};

int main()
{
    BMW my_bmw;
    my_bmw.move_front();
    my_bmw.move_left();
    my_bmw.move_right();
    my_bmw.move_back();
    my_bmw.stop();
    my_bmw.parking();

}
