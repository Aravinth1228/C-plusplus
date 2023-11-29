#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size ,q;
    cin>>size>>q;
    
    int ** A = new int*[size];
    for (int i =0;i<size;i++)
    {
        int s;
        cin>>s;
        A[i] = new int [s];
        for (int j=0;j<s;j++){
         cin>>A[i][j];}
    }
    for (int i=0;i<q;i++){
        int r, c;
        cin>>r>>c;
        cout<<A[r][c]<<endl;
    }
    return 0;
}
