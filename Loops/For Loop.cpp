#include <iostream>
using namespace std;
int main()
{    int n, i, t;
        cout << "Entre the Limited:";
        cin >> n;
        cout << "Entre the Table:";
        cin >> t;
        for (i = 1; i <= n; i++)
        {
            cout << t << "*" << i << "=" << t * i << endl;
        }
        return 0;
}