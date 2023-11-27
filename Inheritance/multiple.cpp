#include<iostream>
using namespace std;
class father
{ public:
 void fishing()
 {
    cout<<" I learn Fishing."<<endl;
 }
 
};
class mother
{ public:
 void cooking()
 {
    cout<<" I learn Cooking ."<<endl;
 }
};
class son:public father,public mother
{
    public:
    void coding()
    {
      cout<<" I learn coding"<<endl;
    }
};
int main()
{
    son s;
    s.fishing();
    s.cooking();
    s.coding();
    return 0;
}