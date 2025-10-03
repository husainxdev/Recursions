#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int classNumber; // private // by default zero te set krbo

public:
    // diff type r arekta constructor likhte  chaschi
    Student(int classNumber)
    {
        cout << "Creating object with parameter " << endl;
        this->classNumber = classNumber;
    }
    int getClassNumber() // getter function
    {
        return classNumber;
    }
    // no paramter allowed !
    ~Student()
    {
        cout << "Destroying student object" << endl;
    }
};

int main()
{
    Student s1(5); // 1ta argument

    cout << "ClassNumber of s1=" << s1.getClassNumber() << endl;

    // Student s2(5);
    Student s2 = s1;
    // copy?? bit by bit copy !!! copy by value
    // copy constructor concept evolved from this

    cout << "ClassNumber of s2=" << s2.getClassNumber() << endl;
}
