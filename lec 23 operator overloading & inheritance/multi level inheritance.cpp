// multi level inheritance
#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "Creating Vehicle constructor " << endl;
    }
    ~vehicle()
    {
        cout << "Destroying vehicle constructor " << endl;
    }
};
class car : public vehicle // inherted publicly
{
public:
    car()
    {
        cout << "Creating Car constructor " << endl;
    }
    ~car()
    {
        cout << "Destroying Car constructor " << endl;
    }
};

class sportsCar : public car
{
public:
    sportsCar()
    {
        cout << "Creating sportsCar constructor " << endl;
    }
    ~sportsCar()
    {
        cout << "Destroying sportsCar constructor " << endl;
    }
};

int main()
{
    sportsCar sc;
}