#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll N, x, count = 0;
    cin >> N;

    ll s = ((N)*(N+1))/2;
    ll goal = s/2;

    if (s%2 == 1){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    deque<ll> d;
    for (ll i = 1; i <= N; ++i) d.push_back(i);
    unordered_set<int> s1;
    bool f = 0;
    while (count != goal){
        if (!f){
            x = d.back();
            d.pop_back();
        }
        else{
            x = d.front();
            d.pop_front();
        }
        s1.insert(x);
        count += x;
        f ^= 1;
    }

    cout << s1.size() << endl;
    for (auto i : s1){
        cout << i << " ";
    }
    cout << endl;

    cout << d.size() << endl;
     
    while (!d.empty()){
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;

    return 0;
}