#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int A[],int size)
{
    for (int i= size -1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin>>size;
    int A[size];
    for(int i=0; i<size;i++)   
    {cin >>A[i];}
    
reverse(A, size);
    return 0;
}
