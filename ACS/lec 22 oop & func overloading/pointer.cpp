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

    Student s1("Rahul"); // malloc  // mem leak

    Student *s2;

    // s2 diye s1 ke point koro
    s2 = &s1;

    s2->show();
}
