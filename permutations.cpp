#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    cin >> n;

    if (n == 3 || n == 2){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<ll> even;
    vector<ll> odd;

    for (ll i = 1; i <= n; i++){
        if (i % 2 == 0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }

    for (auto x : even){
        cout << x << " ";
    }

    for (auto x : odd){
        cout << x << " ";
    }

    cout << endl;
    return 0;
}