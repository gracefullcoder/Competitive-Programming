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
    int num = 0;
    int count;
    for(int i = 0 ; i < n - 1; i++) {
        count = 0;
        while(arr[i] == arr[i+1]){
            count++;
            i++;
        }
        if(count > 0) {
            cout << arr[i] << ":" << count << endl;
            num++;
        }
    }
    if(num == 0){
        cout << "No duplicates" << endl;
    }
    return 0;
}
