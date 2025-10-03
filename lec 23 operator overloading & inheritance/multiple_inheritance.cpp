// multiple inheritance
#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    void drive()
    {
        cout << "Car driving on road" << endl;
    }
};

class Plane
{
public:
    void fly()
    {
        cout << "Plane flying in the sky " << endl;
    }
};
class HybridCar : public Car, public Plane
{
public:
    void showBehaviour()
    {
        cout << "Hello I m Hybrid Car" << endl;
        drive();
        fly();
    }
};

int main()
{
    HybridCar myCar;
    myCar.showBehaviour();
}