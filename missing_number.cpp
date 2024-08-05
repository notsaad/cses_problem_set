#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll sum = 0;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i =0; i < n-1; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    ll s2 = (n) * (n+1) / 2;
    cout << s2 - sum << endl;

    return 0;
}