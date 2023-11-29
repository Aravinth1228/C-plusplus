#include <iostream>
#include <cstdio>

int main() {
    int integerVal;
    long longV
    char charVal;
    float floatVal;
    double doubleVal;

    scanf("%d %ld %c %f %lf", &integerVal, &longVal, &charVal, &floatVal, &doubleVal);

    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", integerVal, longVal, charVal, floatVal, doubleVal);

    return 0;
}
