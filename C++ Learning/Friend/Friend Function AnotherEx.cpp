#include<iostream>
using namespace std;
class A
{
    private:
     int x;
    public:
     A()
     {
        x=0;
     }
     void print()
     {
        cout <<" X = "<<x<<endl;
     }
     friend void setvalue( A &o,int a);
};
void setvalue( A &o,int a)
{
    o.x = a;
}
int main()
{
    A o;
    o.print();
    setvalue(o,95);
    o.print();
    return 0;
}