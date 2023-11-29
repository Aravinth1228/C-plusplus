#include<iostream>
using namespace std;
class bike
{ public:
    virtual void start()=0; //Pure Virtual function.

};
class Apache:public bike 
{ public:
    void start()
    {
     cout<<" Apache Start "<<endl;
    }
};
int main()
{
    bike *p= new Apache();
    p->start();
    return 0;
}