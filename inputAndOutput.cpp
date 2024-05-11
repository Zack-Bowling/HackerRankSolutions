/*
Simple demonstration of reading in inputs and outputting them in C++. This read in three integers, adds them together, then displays the sum.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, s, m;
    cin >> n >> s >> m;
    int sum = n + s + m;
    cout << sum;
    return 0;
}
