#include <bits/stdc++.h>
using namespace std;

class Student
{
    // data??
    int classNumber; // private

public:
    int weight;

    void setClassNumber(int a) // setter function
    {
        cout << "Setting classnumber = " << a << endl;
        classNumber = a;
    }
    int getClassNumber() // getter function
    {
        return classNumber;
    }
};

int main()
{
    Student s1; // creating our 1st student object
    Student s2; // creating our 2nd student object

    // s1.classNumber = 10; //error ! PRIVATE attribute
    cout << "Old classnumber of s1=" << s1.getClassNumber() << endl;
    s1.setClassNumber(2); // calling the func

    // s1.weight = 55;
    // cout << "Weight of s1 student=" << s1.weight << endl;

    int returnedValue = s1.getClassNumber();
    cout << "Class Number of s1 =  " << returnedValue << endl;

    cout << "Updated classnumber of s1=" << s1.getClassNumber() << endl;

    cout << "Exiting" << endl;
}