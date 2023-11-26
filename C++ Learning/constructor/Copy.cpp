#include<iostream>
using namespace std;
class math
{
private:
   int a,b,c;
public:
   math(int x, int y)
   {
      a=x;
      b=y ;
       
   }
   math (math &x)
   {
     a=x.a;
     b=x.b;
   }
   void add()
   {
     c=a+b;
     cout<< "the C Value is :"<<c<<endl;
   }
   
};
int main()
{
    math a(26,84);
    math a1(a);
    a.add();
    a1.add();
    return 0;
}