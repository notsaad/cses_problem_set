#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    ll ans = 0;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for (int i = 1; i < arr.size(); ++i){
        if (arr[i] < arr[i-1]){
            ll count = (arr[i-1] - arr[i]);
            arr[i] += count;
            ans += count;
        }
    }

    cout << ans << endl;

    return 0;
}