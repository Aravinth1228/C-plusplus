#include <iostream>
using namespace std;
// funtion overloadnig
/*int sum(int a, int b)
{
   
    return a + b;
}
float sum(float a, float b )
{

    return a + b;
}
{

    cout << "Total value:" << sum(10, 20) << endl;
    cout << "Total value:" << sum(10.35f,20.34f);
    return 0;
}

// default argurment function:
void biodata(string name,int age,string city)
{
    cout<<name<<" is from "<<city<<" and age is "<<age<<endl;
}
int main()
{

    biodata( "Aravinth",18,"melur");
    biodata( "Sathya",18,"Devapandalam");
    
    return 0;

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
 
 //enum Function:
  enum gender {male,female};
  int main()
  {
    gender g = male;
    switch (g)
    {
        case male:
           cout<<"Gender Male";
            break;
        case female:
           cout<<"Gender female";
        break;
        default:
           cout<<"Invalid ";
        break;
    }
    
  } */

  // Problem:

  Basic c++ example:
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
    cout<<"Area of circle :"<<o.area();
    cout<<"Area of circumfernance :"<<o.Circumfernace();
    return 
  }*/