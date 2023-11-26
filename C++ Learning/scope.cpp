#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int m1, m2, m3, tot;
    float avg;

public:
    void getData()
    {
        cout << "Enter the Name :" << endl;
        cin >> name;
        cout << "enter the 3 marks :" << endl;
        cin >> m1>>m2 >> m3;
    }
    void display();
};
void student::display()
{
    tot = m1 + m2 + m3;
    avg = tot / 3;
    cout << "Name :" << name << endl;
    cout << "M1:" << m1 << endl;
    cout << "M2:" << m2 << endl;
    cout << "M3:" << m3 << endl;
    cout << "Total :" << tot << endl;
    cout << " Average :" << avg << endl;
};
int main()
{
    student a;
    a.getData();
    a.display();
    return 0;
}
