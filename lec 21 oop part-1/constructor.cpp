#include <bits/stdc++.h>
using namespace std;

class Student
{
    // data??
    int classNumber; // private // by default zero te set krbo

public:
    // constructor // no RETURN possible
    Student()
    {
        cout << "Creating object" << endl;
        classNumber = 1;
    }

    // diff type r arekta constructor likhte  chaschi
    Student(int a)
    {
        cout << "Creating object with parameter " << endl;
        classNumber = a;
    }

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
    Student s1;    // creating our 1st student object
    Student s2(5); // 1ta argument

    cout << "Classnumber of s1 = " << s1.getClassNumber() << endl;
    cout << "Classnumber of s2 = " << s2.getClassNumber() << endl;
}