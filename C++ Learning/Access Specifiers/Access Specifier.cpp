#include <iostream>
using namespace std;

/*
Access Specifier
    Public
    Private
*/

class Student
{
private:
    string name;
    int age;

public:
    void getData()
    {
        cout << "Enter Name & Age :" << endl;
        cin >> name;
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student o;
    o.getData();
    o.display();
    return 0;
}
