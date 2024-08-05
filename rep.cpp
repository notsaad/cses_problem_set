#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string input;

    cin >> input;
    ll ans = 0;

    ll i = 0;
    if (input.length() == 1){
        cout << "1" << endl;
        return 0;
    }
    while (i < input.length() - 1){
        ll running = 1;
        while (i < input.length() -1 && input[i] == input[i+1]){
            running++;
            i++;
        }
        ans = max(running, ans);
        i++;
    }
    cout << ans <<endl;

    return 0;
}