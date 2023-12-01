#include <iostream>
using namespace std;
//Template in C++
template <class S>
 void swaping(S &a,S &b)
 {
     S t = a;
         a = b;
         b = t;
 }
 int main()
 {
    int a=10,b=30;
    char x='A',y='B';
    cout<<"Before A:"<<a<< "| Before B :"<<b <<endl;
    swaping(a,b);
    cout<<"After A:"<<a<< "| After B :"<< b<<endl;

    cout<<"Before X:"<<x<< "| Before  Y:"<<y  <<endl;
    swaping(x,y);
    cout<<"After X :"<<x<< "| After Y :"<<y<<endl;
    return 0;
}
 