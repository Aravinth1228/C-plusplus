#include <iostream>
using namespace std;
class base
{
protected:
    int a, b;

public:
    void add()
    {
        cout << " ENter the 2 Number :" << endl;
        cin >> a >> b;
        cout << "Total : " << a + b << endl;
    }
};
class derived : public base
{
private:
    int c;

public:
    void add()
    {
        cout << " Enter the 3 Number :" << endl;
        cin >> a >> b >> c;
        cout << "Total : " << a + b  +c << endl;
    }
};
int main()
{
    base b;
    b.add();
    derived d;
    d.add();
    return 0;
}