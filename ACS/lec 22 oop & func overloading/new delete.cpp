#include <bits/stdc++.h>
using namespace std;

class Student
{

    string name; // 1 num name
public:
    Student(string name)
    {
        this->name = name;
    }
    ~Student()
    {
        cout << "Deleting obj of name " << this->name << endl;
    }
    void show()
    {
        cout << "Name is " << this->name << endl;
    }
};

int main()
{
    Student s1("Dipit"); // local var  // int a; int b;
    s1.show();
    Student *s2 = new Student("Alice"); // malloc  // mem leak
    s2->show();
    // pointer use korle "->"
    //  else "."

    delete s2;
}
