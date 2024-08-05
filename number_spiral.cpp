#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    cin >> n;
    while (n){
        ll x, y;
        cin >> x >> y;
        if (x == y){
            cout << ((x*y)-(x-1)) << endl;
        }
        else if (x > y){
            ll a =  ((x*x)-(x-1));
            if (x % 2 == 0){
                cout << (a + (x-y)) << endl;
            }
            else{
                cout << (a - (x-y)) << endl;
            }
        } else{
            ll a = ((y*y)-(y-1));
            if (y % 2 == 1){
                cout << (a + (y - x)) << endl;
            }
            else {
                cout << (a - (y - x)) << endl;
            }
        }
        n--;
    }

    return 0;
}