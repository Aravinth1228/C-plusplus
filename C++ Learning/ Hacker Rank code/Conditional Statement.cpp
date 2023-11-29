#include <iostream>
using namespace std;

int main() {
    int n;

    // Input
    cin >> n;

    // Check the conditions and print the output
    if (n >= 1 && n <= 9) {
        // Use a switch statement to print the corresponding English word
        switch (n) {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
                break;
        }
    } else {
        // If the number is greater than 9, print "Greater than 9"
        cout << "Greater than 9" << endl;
    }

    return 0;
}
