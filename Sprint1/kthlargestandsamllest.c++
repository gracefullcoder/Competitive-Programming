#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc > 0)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> newarr;
        long long count;
        for (long long i = 0; i < n; i++)
        {
            cin >> count;
            newarr.push_back(count);
        }

        sort(newarr.begin(), newarr.end());

        // for(auto i = newarr.begin() ; i < newarr.end() ; ++i){
        //     cout << *i << ;
        // }

        // for(auto i = newarr.begin() ; i < newarr.end() - 1 ; i++) {
        //     if(*i == *(i+1)){
        //         newarr.erase(i);
        //     }
        // }

        // for(auto i = newarr.begin() ; i < newarr.end() ; ++i){
        //     cout << *i;
        // }
        
        auto it = unique(newarr.begin(), newarr.end());
        newarr.erase(it, newarr.end());

        // Prlong long the unique elements
        // for (long long elem : newarr)
        // {
        //     cout << elem << " ";
        // }

        cout << newarr.at(k-1) << " " <<newarr.at(newarr.size() - k) << endl;
        tc--;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// long long findKthLargest(vector<long long>& nums, long long k) {
//     partial_sort(nums.begin(), nums.begin() + k, nums.end(), greater<long long>());
//     return nums[k - 1];
// }

// long long findKthSmallest(vector<long long>& nums, long long k) {
//     partial_sort(nums.begin(), nums.begin() + k, nums.end());
//     return nums[k - 1];
// }

// int main() {
//     vector<long long> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
//     long long k = 3;

//     long long kthLargest = findKthLargest(nums, k);
//     long long kthSmallest = findKthSmallest(nums, k);

//     cout << k << "th largest element: " << kthLargest << endl;
//     cout << k << "th smallest element: " << kthSmallest << endl;

//     return 0;
// }

