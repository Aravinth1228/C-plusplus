#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void fun()
    {
        cout<<" Function of Base Class. "<<endl;
    }
};
class Derived:public Base
{
   public :
   void  fun()
   {
     cout<<" Function of Derived Class."<<endl;
   }
};
int main()
{
    Derived d;
    Base *p=NULL;
     p=&d;
     p->fun();
     return 0;
}