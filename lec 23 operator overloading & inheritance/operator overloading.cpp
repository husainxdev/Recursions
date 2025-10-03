// obj1+obj2 , obj1-obj2 , == , x++ , ++x , -obj1

#include <bits/stdc++.h>
using namespace std;

class coord
{
    int x, y;

public:
    coord() {}
    coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "X : " << this->x << "  and Y: " << this->y << endl;
    }

    coord operator+(coord &obj2)
    {
        coord obj3;
        obj3.x = this->x + obj2.x;
        obj3.y = this->y + obj2.y;
        return obj3;
    }

    coord operator+(int i)
    {
        coord obj3;
        obj3.x = this->x + i;
        obj3.y = this->y + i;
        return obj3;
    }
    coord operator-(coord &obj2)
    {
        coord obj3;
        obj3.x = this->x - obj2.x;
        obj3.y = this->y - obj2.y;
        return obj3;
    }

    bool operator==(coord &obj2)
    {
        if (this->x == obj2.x && this->y == obj2.y)
        {
            return true;
        }
        return false;
    }

    // prefix "y=++x"
    coord operator++()
    {
        coord temp(0, 0);
        temp.x = ++(this->x);
        temp.y = ++(this->y);
        return temp;
    }

    // postfix y=x++// hard syntax
    coord operator++(int unused)
    {
        coord temp(0, 0);
        temp.x = x++;
        temp.y = y++;
        return temp;
    }
    coord operator-()
    {
        coord temp(0, 0);
        temp.x = -x; // temp.x = -(this->x);
        temp.y = -y;
        return temp;
    }
};

// coord add(coord obj1, coord obj2){
//     return obj3;
// }

int main()
{
    coord obj1(40, 50);
    coord obj2(40, 50);
    coord obj3 = obj1 + obj2;
    obj3.show();

    coord obj4 = obj1 - obj2;
    obj4.show();

    coord obj5 = obj1 + 5;
    obj5.show();

    if (obj1 == obj2)
    {
        cout << "They are same obj " << endl;
    }
    else
    {
        cout << "They are not same obj " << endl;
    }

    // prefix
    obj1.show();
    coord obj6 = ++obj1;
    obj1.show();
    obj6.show();

    // post increment  obj6=obj1++;
    obj1.show();
    coord obj6 = obj1++;
    obj1.show();
    obj6.show();

    coord obj7 = -obj1;
    obj7.show();
}
