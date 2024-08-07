#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;

    unordered_map<char, int> m;

    for (char c : s){
        m[c]++;
    }

    string s1 = "";
    string odd = "";

    for (auto i : m){
        if (i.second%2 == 1){
            if (odd.length() > 0){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            odd.append(i.second, i.first);
        }
        else{
            s1.append(i.second/2, i.first);
        }
    }

    string s2 = s1;

    reverse(s2.begin(), s2.end());

    cout << s1 << odd << s2 << endl; 

    return 0;
}