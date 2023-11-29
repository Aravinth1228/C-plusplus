#include <stdio.h>
#include <math.h>

void update(int *pa,int *pb) {
    // Complete this function   
    int temp = *pa;
    *pa = *pa + *pb;
    *pb = abs(temp - *pb); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
