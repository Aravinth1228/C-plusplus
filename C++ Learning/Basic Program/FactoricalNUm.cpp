#include<iostream>
using namespace std;

int main(){
    int num,fact =1;
    cout <<" Enter the NUmber:"<< endl;
    cin >> num;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    cout<< "Factorial of " << num << " is: " << fact << endl;
    return 0;
}
/*5
Factorial of 5 is: 120
*/