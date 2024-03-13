    #include <iostream>
    using namespace std;

    int main() {
        int tc;
        cin >> tc;
        while(tc--) {
            int n,s,x;
            cin >> n >> s >> x;
            int arr[n];
            for(int i = 0 ; i < n ; i++) {
                cin >> arr[i];
                s += arr[i];
                if(s == x) {
                    cout << i+1 << " ";
                }
            }
            cout << endl;
        }
        return 0;
    }