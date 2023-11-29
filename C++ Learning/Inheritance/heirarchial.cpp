#include <iostream>
using namespace std;
class shape
{
public:
    float length, hight, radius;
};
class rectangular : public shape
{
public:
    void Getrectangulardetail()
    {
        cout << "length =" << endl;
        cin >> length;
        cout << "Hight =" << endl;
        cin >> hight;
    }
    double retangular_area()
    {
        return length * hight;
    }
};
class circle : public shape
{
public:
    void GetcircleDetial()
    {
        cout << "Enter a radius :" << endl;
        cin >> radius;
    }
    double circle_area()
    {
        return 3.14*(radius * radius);
    }
};
class square : public shape
{
    public:
    void GetSquareSize()
    {
        cout << "Enter a length size :" << endl;
        cin >> length;
    }
    double square_area()
    {
        return length * length;
    }
};
int main()
{
    rectangular r;
    circle c;
    square s;
    r.Getrectangulardetail();
    cout<<"Area of rectangle :"<<r.retangular_area()<<endl;
    c.GetcircleDetial();
    cout<<"Area of circle :"<<c.circle_area()<<endl;
    s.GetSquareSize();
    cout<<"Area of Square :"<<s.square_area()<<endl;
    return 0;

}