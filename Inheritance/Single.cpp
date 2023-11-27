#include<iostream>
using namespace std;
class father
{ public:
 void house()
 {
    cout<<" I have a Big House  ."<<endl;
 }
};
class son:public father
{
    public:
    void car()
    {
      cout<<" I have a car."<<endl;
    }
};
int main()
{
    son s;
    s.house();
    s.car();
    return 0;
}