#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout  << "Enter two numbers to swap: " << endl;
    cin >> a >> b;
    temp = a;
    a =b;
    b = temp;
    cout << "After swapping: " << a << " " << b << endl;
}
/*Enter two numbers to swap: 
5
6
After swapping: 6 5
*/