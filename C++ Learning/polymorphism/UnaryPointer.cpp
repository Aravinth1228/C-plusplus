#include<iostream>
using namespace std;
class Box
{
  private:
  int x;
  public:
   Box()
   {
    x=0;
   }
   Box(int a )
   {
     x=a;
   }
   void print()
   {
    cout<<" X :"<<x<<endl;
   }
   void operator --()
   {
    --x;
   }
   void operator --(int)
   {
    x--;
   }
};
int main ()
{
    Box s;
    s.print();
    --s;
    s.print();
    s--;
    s.print();
    return 0;
}