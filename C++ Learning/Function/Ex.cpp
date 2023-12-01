
#include <iostream>
using namespace std;
  /*Basic c++ example:
  1. Area of a circle '
  2. Circumfernace of a cirle*/
  class circle
  {
     private:
      float raduis;
     public:
     float area()
     {
        cout<<"Enter the radius:" ;
        cin >> raduis;
        return ( 3.14*(raduis*raduis));
     }
     float Circumfernace()
     {
       return ( 2*3.14*raduis); 
     }
  };
  int main()
  {
    circle o;
    cout<<"Area of circle :"<<o.area()<<endl;
    cout<<"Area of circumfernance :"<<o.Circumfernace();
    return 0;
  }