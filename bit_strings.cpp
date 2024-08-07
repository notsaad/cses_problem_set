#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    cin >> n;
    
    ll ans = 1;
    ll d = (ll)(1e9+7);

    for (int i = 0; i < n; ++i){
        ans *= 2;
        ans %= d;
    }

    cout << ans << endl;

    return 0;
}