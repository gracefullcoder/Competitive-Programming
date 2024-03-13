#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k;
    cin >> k;
    int half = 1 , i = 1;
    while(half <= k){
        i++;
        half = i * i;
    }
    cout << i - 1;
    return 0;
}
