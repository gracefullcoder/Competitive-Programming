// #include <bits/stdc++.h>
// using namespace std;

// void mergeSort(int *arr, int si, int ei, long long int* count)
// {
//     if (si >= ei)
//     {
//         return;
//     }

//     int mid = ei + (ei - si) / 2;
//     mergeSort(arr, si, mid, count);
//     mergeSort(arr, mid + 1, ei, count);
//     merge(arr, si, mid, ei, count);

// }
// void merge(int *arr, int si, int mid, int ei, long long int* count)
// {
//     int temp[ei - si + 1];
//     int i = si;
//     int j = mid + 1;
//     int k = 0;
//     while (i <= mid && j <= ei)
//     {
//         if (arr[i] > arr[j])
//         {
//             *count += 100;
//             temp[k++] = arr[i++];
//         }
//         else
//         {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= mid)
//     {
//         *count += 100;
//         temp[k++] = arr[i++];
//     }
//     while (j <= ei)
//     {
//         temp[k++] = arr[j++];
//     }

//     int idx = 0;
//     for(int k = si ; k <= ei ; k++){
//         arr[k] = temp[idx++];
//     }
// }   

// int main()
// {
//     // long long tc;
//     // cin >> tc;
//     // while(tc--) {

//     // }
//     int n;
//     cin >> n;
//     int arr[n];
//     int earn = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     long long int count = 0;
//     mergeSort(arr, 0, n, &count);
//     cout << count;
//     // for(int i = n - 1 ; i > 0 ; i--) {
//     //     for(int j = i - 1 ; j >= 0 ; j--) {
//     //          if(arr[i] < arr[j] ){
//     //             earn += 100;
//     //          }
//     //     }
//     // }

//     return 0;
// }

#include <stdio.h>

void merge(int arr[], int si, int mid, int ei, long long int* count) {
    int temp[ei - si + 1];
    int i = si;
    int j = mid + 1;
    int k = 0;
    
    while (i <= mid && j <= ei) {
        if (arr[i] > arr[j]) {
            *count += (mid-i+1)*100;
            temp[k++] = arr[j++];
        } else {
            temp[k++] = arr[i++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= ei) {
        temp[k++] = arr[j++];
    }

    int idx = 0;
    for(int k = si ; k <= ei ; k++) {
        arr[k] = temp[idx++];
    }
}

void mergeSort(int arr[], int si, int ei, long long int* count) {
    if (si >= ei) {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid, count);
    mergeSort(arr, mid + 1, ei, count);
    merge(arr, si, mid, ei, count);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    long long int count = 0;
    mergeSort(arr, 0, n - 1, &count);
    printf("%lld", count);

    return 0;
}
