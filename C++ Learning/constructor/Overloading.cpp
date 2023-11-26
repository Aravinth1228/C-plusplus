#include<iostream>
using namespace std;
class math
{
private:
   int a,b,c;
public:
   math()//default
   {
       cout<<"Enter the a & b number :"<<endl;
       cin>>a>>b;
       
   }
   math(int x, int y)//parameterix
   {
      a=x;
      b=y ;
       
   }
   math (math &x)//copy
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
    math a1;
    math a2(12,36);
    math a3(a2);
    a1.add();
    a2.add();
    a3.add();
    return 0;
}