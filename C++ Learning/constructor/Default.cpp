#include<iostream>
using namespace std;
class math
{
private:
   int a,b,c;
public:
   math()
   {
       cout<<"Enter the a & b number :"<<endl;
       cin>>a>>b;
       
   }
   void add()
   {
     c=a+b;
     cout<< "the C Value is :"<<c<<endl;
   }
   
};
int main()
{
    math a;
    a.add();
    return 0;
}