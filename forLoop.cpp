/*
Simple demonstrations of a for loop in C++. Reads in two integers, a and b. It will print every number from integer a to b, as long as neither integer is
greater than 9. It also prints whether the integer is even or odd.
*/  
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string numbers[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i <= b; i++) {
        if (i > 9) {
            if (i % 2 == 0) {
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
        else {
            cout << numbers[i] << endl;
        }
    }
    return 0;
}
