#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll N;
    cin >> N;

    while (N--){
        ll a, b;
        cin >> a >> b;
        ll rA = 2*a -b;
        ll rB = 2*b -a;

        if (rA >= 0 && rB >= 0 && rA%3==0 && rB%3 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}