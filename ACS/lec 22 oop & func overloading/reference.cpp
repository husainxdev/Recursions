// kisu use korbona
// pointer use korbo
// reference use korbo
#include <bits/stdc++.h>
using namespace std;

void modifyValue(int x)
{
    x++; //local var x er value barse
}

void modifyPointer(int *p)
{
    (*p)++;  // a er value barbe
}

void modifyReference(int &r)
{
    r++;
}

int main()
{
    int a = 100;
    modifyValue(a);
    cout << "Value of a after modifyValue = " << a << endl;

    modifyPointer(&a);
    cout << "Value of a after modifyPointer = " << a << endl;

    modifyReference(a);
    cout << "Value of a after modifyPointer = " << a << endl;
}