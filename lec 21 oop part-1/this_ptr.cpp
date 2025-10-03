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
};

int main()
{
    Student s2(5); // 1ta argument

    cout << "ClassNumber of s2=" << s2.getClassNumber() << endl;
}