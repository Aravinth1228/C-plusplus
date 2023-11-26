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
   void add()
   {
     c=a+b;
     cout<< "the C Value is :"<<c<<endl;
   }
   
};
int main()
{
    math a(26,84);
    a.add();
    return 0;
}