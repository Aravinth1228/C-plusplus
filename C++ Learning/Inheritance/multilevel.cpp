#include <iostream>
using namespace std;
class grandfather
{
public:
    void house()
    {
        cout << " I have a big House." << endl;
    }
};
class father : public grandfather
{
public:
    void land()
    {
        cout << " I have Have a 5 land." << endl;
    }
};
class son : public father
{
public:
    void car()
    {
        cout << " I have a Car." << endl;
    }
};
int main()
{
    son s;
    s.house();
    s.land();
    s.car();
    return 0;
}