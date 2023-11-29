#include <iostream>
using namespace std;
class A
{
    private:
     int x,y;
    public:
     friend void setData();
};
void setData()
{
   A a  ;
   a.x =20;
   a.y =10;
   cout<<" X = "<<a.x<<endl;
   cout<<" Y = "<<a.y<<endl;
}
int main()
{
    setData();
    return 0;
}