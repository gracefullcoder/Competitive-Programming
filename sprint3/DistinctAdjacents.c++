#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    
    sort(arr,arr+n);
    
    int count;
    for(int i = 0 ; i < n - 1; i++) {
        count = 1;
        while(arr[i] == arr[i+1]){
            count++;
            i++;
        }
        if(count >= ceil((double)n/2) + 1) {
            cout <<"no"<< endl;
            return 0;
        }
    }
    cout <<"yes"<< endl;
    return 0;
}
