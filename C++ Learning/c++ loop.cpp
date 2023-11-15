#include <iostream>
using namespace std;
int main()
{
    /* //While
    int i=1,n;
    cout<<"Entre the limited: ";
    cin>>n;
    while (i<=n)
    {
     cout<<"\n"<<i;
     i++;
    }

    // do while
    int n, i = 1;
    cout << "\nEntre the Limited: ";
    cin >>n;
    do
    {
        if (i % 2 == 0)

            cout << i << endl;
            i++;


    } while (i <= n);

    // For loop
    int n, i, t;
    cout << "Entre the Limited:";
    cin >> n;
    cout << "Entre the Table:";
    cin >> t;
    for (i = 1; i <= n; i++)
    {
        cout << t << "*" << i << "=" << t * i << endl;
    }

    // FOr each
    char a[] = {55, 56, 57, 58, 59, 60};
    for (char X : a)
    {
        cout << X << endl;
    }

    // Problem1 the total number of sum of n
    int i, n, total = 0;
    cout << "\nEntre the Limited:";
    cin >> n;
    for (i = 1; i <= n; i++)
        ;
    {
        total = total + i;
    }
    cout << " The sum of n =" << total;*/

    // Problem2 to find the Factor numbres
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