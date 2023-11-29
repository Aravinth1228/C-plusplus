#include <iostream>
using namespace std;
class student
{
private:
    static int x;
    string name;
    int age;

public:
    student(string n, int a)
    {
        x++;
        name = n;
        age = a;
    }
    void print()
    {
        cout << " Name :" << name << endl;
        cout << " Age  :" << age << endl;
        cout << "--------------" << endl;
    }
    static int getCount()
    {
        return x;
    }
};
int student ::x = 0;
int main()
{
    student s1("Aravinth", 19);
    student s2("Sathya", 19);
    student s3("Girija", 19);
    s1.print();
    s2.print();
    s3.print();
    cout << " Total Student : " << student::getCount() << endl;
    return 0;
}
