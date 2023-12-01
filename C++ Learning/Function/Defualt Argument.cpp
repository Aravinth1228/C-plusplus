#include <iostream>
using namespace std;
void biodata(string name,int age,string city)
{
    cout<<name<<" is from "<<city<<" and age is "<<age<<endl;
}
int main()
{

    biodata( "Aravinth",18,"melur");
    biodata( "Sathya",18,"Devapandalam");
    
    return 0;
}