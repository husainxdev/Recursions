#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char *name;
    // address niye kaj korbo..tai ekhn amader copy const alada kore likha lagbe

    Student(const char *temp)
    {
        this->name = new char[strlen(temp) + 1]; // '\0' null char thake string r shesh e
        strcpy(name, temp);                      // string copy kore
    }
    // copy constructor
    Student(const Student &oldObject)
    {
        int length = strlen(oldObject.name); //
        this->name = new char[length + 1];   // new obj r jnne new memory allocation done
        strcpy(this->name, oldObject.name);
    }

    ~Student()
    {
        // free korbo name var ta ke
        delete[] name; // 1D array free korar code
    }
    void show()
    {
        cout << this->name << endl;
    }
};

//returning object
Student createStudent()
{
    Student student2("Mina"); // obj create hosche and name r jnne malloc hoise
    student2.show();
    return student2;
}

int main()
{
    Student student1("Raju");
    student1.show();
    Student newStudent = createStudent(); // bit by bit //
    newStudent.show();
}
