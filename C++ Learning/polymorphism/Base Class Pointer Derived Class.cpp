#include<iostream>
using namespace std;
class car//Base Class
{
    public:
    void start()
    {
        cout<<" Car Start "<<endl;
    }
};
class BMW: public car//derived class
{
    public:
    void AdvanceGear()
    {
        cout<<" BMW Advance Car ";
    }
};
int main ()
{
   BMW b;
   car *p=NULL;
   p=&b;
   p->start();
   return 0;
}
