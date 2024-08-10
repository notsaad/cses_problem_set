#include <bits/stdc++.h>
#define ll long long
using namespace std;

void backtrack(const string n, int i, set<string>& ans, string word)
{
    if (i == n.length()){
        ans.insert(word);
        return;
    }

    int insertion = 0;

    while (insertion <= word.length()){
        string new_word = word;
        new_word.insert(insertion, 1, n[i]);
        backtrack(n, i+1, ans, new_word);
        insertion++;
    }
    return;
}

int main() {

    string n;
    cin >> n;

    set<string> ans;
    backtrack(n, 0, ans, "");
    cout << ans.size() << endl;
    for (auto& s : ans){
        cout << s << endl;
    }

    return 0;
}
