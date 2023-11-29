#include <iostream>
using namespace std;
int main()
{
     // Problem2 to find the Factor numbres reminder
   int n;
    cout << "\nEnter the Number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
    return 0;
}