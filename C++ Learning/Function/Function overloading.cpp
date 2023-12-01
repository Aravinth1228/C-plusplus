#include <iostream>
using namespace std;

// Function overloading
int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Total value: " << sum(10, 20) << endl;
    cout << "Total value: " << sum(10.35f, 20.34f) << endl;

    return 0;
}
