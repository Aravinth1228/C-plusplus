#include<iostream>
using namespace std;
class B;
class A
{
    public:
    int x = 20;
    friend B;
};
class B
{
public:
 A o;
 void Display()
 {
    cout<<" X = "<<o.x<<endl;
 }
};
int main()
{
    B b;
    b.Display();
    return 0;
}