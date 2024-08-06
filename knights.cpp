#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    cin >> n;
    ll i = 1;
    while (i <= n){
        ll total = ((i*i)*(i*i-1)) / 2;
        ll c = ((i-2)*(i-1)) * 4;
        cout << (total - c) << endl;
        i++;
    }
    return 0;
}