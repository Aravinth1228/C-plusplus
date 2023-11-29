#include <iostream>
using namespace std;
class student
{
    private:
     string name;
     int age;
     public:
     student(string n, int a)
     {
        this->setname(n);
        this->setage(a);
     }
     string getname()
     {
        return this->name;
     }
     void setname(string n)
     {
        this->name=n;
     }
    int getage()
     {
        return this->age;
     }
     void setage(int a)
     {
        this->age=a;
     }
     void getprint()
     {
        cout<<" Name :"<<name<<endl;
        cout<<" Age  :"<<age<<endl;
     }
};
int main()
{
    student s("Aravinth",18);
    s.getprint();
    s.setname("Sathya");
    s.setage(18);
    s.getprint();
    cout<<s.getname()<<endl;
    return 0;
}