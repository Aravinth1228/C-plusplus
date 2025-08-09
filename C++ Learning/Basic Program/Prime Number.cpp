#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    int i;
    cout << "Enter a number: ";
    cin >> num;
    for(i = 2; i <= num / 2; ++i) {
        if(num % i == 0) {
            count++;
            break;
        }
    }
    if (count == 0 && num > 1)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
}
/*Enter a number: 12
12 is not a prime number.
Enter a number: 5
5 is a prime number.
*/