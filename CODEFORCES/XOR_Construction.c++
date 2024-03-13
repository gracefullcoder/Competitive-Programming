// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int findPair(int *countArr, int k, int aage, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (countArr[i] == 0)
//         {
//             if (i != k && (i ^ k) == aage) 
//             {
//                 countArr[i]++;
//                 return i;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         countArr[i] = 0;
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n-1];
//     for (int i = 0; i < n-1; i++)
//     {
//         cin >> arr[i];
//     }

//     int printArr[n];
//     int countArr[n] = {0}; 
//     int count = -1;

//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         printArr[count] = i;
//         countArr[i]++;
//         int boole = findPair(countArr, printArr[count], arr[count], n);
//         while (boole >= 0 && count < n)
//         {
//             count++;
//             printArr[count] = boole;
//             boole = findPair(countArr, printArr[count], arr[count], n);
//         }
//         if (count == n - 1)
//         {
//             break;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << printArr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//optimized

// #include <iostream>
// #include <vector>
// using std::vector;
// using std::cin;
// using std::cout;

// int findPair(vector<int>& countArr, int k, int aage)
// {
//     for (int i = 0; i < countArr.size(); i++)
//     {
//         if (countArr[i] == 0 && i != k && (i ^ k) == aage)
//         {
//             countArr[i]++;
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n - 1);
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<int> printArr(n);
//     vector<int> countArr(n, 0);

//     int count = -1;

//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         printArr[count] = i;
//         countArr[i]++;
//         int boole = findPair(countArr, printArr[count], arr[count]);
//         while (boole >= 0 && count < n)
//         {
//             count++;
//             printArr[count] = boole;
//             boole = findPair(countArr, printArr[count], arr[count]);
//         }
//         if (count == n - 1)
//         {
//             break;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << printArr[i] << " ";
//     }
//     cout << std::endl;

//     return 0;
// }


//optimized

#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int findPair(unordered_map<int, int>& indexMap, int k, int aage, int n) {
    auto it = indexMap.find(aage ^ k);
    if (it != indexMap.end() && it->second > 0) {
        it->second--;
        return it->first;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int printArr[n];
    unordered_map<int, int> indexMap;
    int count = -1;

    for (int i = 0; i < n; i++) {
        count = 0;
        printArr[count] = i;
        indexMap[i]++;
        int boole = findPair(indexMap, printArr[count], arr[count], n);
        while (boole >= 0 && count < n - 1) {
            count++;
            printArr[count] = boole;
            boole = findPair(indexMap, printArr[count], arr[count], n);
        }
        if (count == n - 1) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << printArr[i] << " ";
    }
    cout << endl;
    return 0;
}

