/*
Program that demonstrates different data types in C++, reads in each data type and displays them.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    long b; 
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c ,&d ,&e );
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", a, b, c, d, e);
    return 0;
}
