#include <iostream>
using namespace std;
int main()
{
    // mainpulating Funtion
    /* string x ="Aravinth";
     string y ="Sthya";
     cout<<"Before x :"<<x<<endl;
     cout<<"Before y :"<<y<<endl;
     x.swap(y);
     cout<<"After x :"<<x<<endl;
     cout<<"After y :"<<y<<endl;

     //IF CONDITION
     int a,b;
     cout<<"\nEnter the value of a&b:";

     cin>>a>>b;
     if (a>b)
     {
         cout<<a<<" is a greatest Number";
     }
     if (b>a)
     {
         cout<<b<<" is a greatest Number";
     }
     if (a==b)
     {
         cout<<a<<b<<" are equal";
     }

     //if else:
     char c;
     cout<<"\nENter the Charater:";
     cin>>c;
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U')
     {
         cout<<c<<"is a Vowal.";
     }
     else
     {
          cout<<c<<"is not a Vowal.";
     }

     // nested if
     char gender;
     int age;
     cout<<"\nEnter the age :";
     cin>>age;
     if (age >=18)
     {
         cout<<"Entre the Gender :"<<endl;
         cin>>gender;
         if(gender=='m'||gender=='M')
         {
             cout<<"\nGO to room no 5";
         }
         else if(gender=='f'||gender=='F')
         {
             cout<<"\nGO to room no 6";
         }
         else
         {
             cout<<"your inter gender invold ";
         }

     }
     else
     {
         cout<<"Your not eligible";
     }

     //switch case;
     int m;
     cout<<" enter your Mounth in number(1to12):";
     cin>>m;
     switch (m)
     {
     case 1:
       cout<<"Jan"<<endl;
         break;
     case 2:
       cout<<"Feb"<<endl;
         break;
     case 3:
       cout<<"mar"<<endl;
         break;
     case 4:
       cout<<"Apr"<<endl;
         break;
     case 5:
       cout<<"may"<<endl;
         break;
     case 6:
       cout<<"jun"<<endl;
         break;

     case 7:
       cout<<"Jul"<<endl;
         break;
     case 8:
       cout<<"aug"<<endl;
         break;

     case 9:
       cout<<"sep"<<endl;
         break;
     case 10:
       cout<<"oct"<<endl;
         break;
     case 11:
       cout<<"nov"<<endl;
         break;
     case 12:
       cout<<"dec"<<endl;
         break;
     default:
       cout<<" your are invode month number";
         break;
     }*/

    // problem if else
    float bs, gs, hr, da;
    cout << "/nEnter the Basic salary:";
    cin >> bs;
    if (bs < 1500)
    {
        hr = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hr = 500;
        da = bs * 98 / 100;
    }
    gs = bs + hr + da;
    cout << "The Basic Salary:" << bs << endl;
    cout << " HRA            :" << hr << endl;
    cout << " DA             :" << da << endl;
    cout << "-------------------------------" << endl;
    cout << "The Gross salary:" << gs << endl;

    return 0;
}