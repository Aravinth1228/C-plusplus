#include<iostream>
using namespace std;

namespace name {
    string name = "Aravinth";
    int age = 20;
}
namespace name2 {
    string name = "Selvam";
}

int main(){
cout << "Student 1  : " << name::name;
cout << "\nAge      : " << name::age;
cout << "\nStudent 2: " << name2::name;

    return 0;
}