/**
* author : _Grandmaster
* created : 06-12-2023 21:33:31
**/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#define MOD 1000000007

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (ll i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    ll rslt = 1;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (mp[ch] == 0) continue;
        rslt *= (mp[ch] + 1);
        rslt %= MOD;
    }
    cout << ((rslt - 1 + MOD) % MOD) << endl;
}


int main()
{
    IMRAN
    ll t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}