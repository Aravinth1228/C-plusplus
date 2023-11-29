#include <iostream>
using namespace std;
class A
{
protected:
    int x;
};
class B : protected A
{
public:
    void GetDetial()
    {
        cout << "Enter the X value :" << endl;
        cin >> x;
    }
    void display()
    {
        cout << "X = " << x;
    }
};
int main()
{
    B o;
    o.GetDetial();
    o.display();
    return 0;
}