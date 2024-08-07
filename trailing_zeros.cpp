#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll N;
    cin >> N;
    ll ans=0;
    ll x = 5;
    while (1){
        ll i = N/x;
        if (i == 0){
            break;
        }
        ans += i;
        x*=5;
    }
    cout << ans << endl;
    return 0;
}