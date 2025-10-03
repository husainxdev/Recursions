#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    string engineName = "twin turbo";

protected:
    int maxSpeed = 250;

public:
    string name = "XYZ Car";

    void show() // member function
    {
        cout << "Inside car show func " << endl;
        cout << "engineName : " << engineName << endl;
        cout << "maxSpeed : " << maxSpeed << endl;
        cout << "name : " << name << endl;
    }
};

class SportsCar : public Car
{
public:
    void show()
    {
        cout << "Inside sportsCar show func" << endl;
        // cout << "engineName : " << engineName << endl;
        cout << "maxSpeed : " << maxSpeed << endl;
        cout << "name : " << name << endl;
    }
};

class Truck : private Car
{
    // maxspeed and name ke derive korso..egula ke privately derive korso
    //  so maxspeed and name egula ke private property tomar
public:
    void show()
    {
        cout << "Inside sportsCar show func" << endl;
        // cout << "engineName : " << engineName << endl;
        cout << "maxSpeed : " << maxSpeed << endl;
        cout << "name : " << name << endl;
    }
};

int main()
{
    SportsCar sc;
    sc.show();
    // cout << "engineName : " << sc.engineName << endl;
    // cout << "maxSpeed : " << sc.maxSpeed << endl;
    cout << "sc's name : " << sc.name << endl;

    Truck truck;
    truck.show();
    //cout << "truck's name : " << truck.name << endl;
}