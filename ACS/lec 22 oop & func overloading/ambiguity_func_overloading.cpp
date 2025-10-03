#include <bits/stdc++.h>
using namespace std;

// void show(int a){
// }

void show(float b)
{
    cout << "calling float func" << endl;
}
void show(double c)
{
    cout << "calling double func" << endl;
}
int main()
{
    // show(1);   // int ke float / double    // 1 ke 1.0

    show(2.5);

    float num = 1.3;
    show(num);
    double temp = 2.45435;
    show(temp);
}