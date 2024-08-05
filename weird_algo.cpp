#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // if n is even divide by two
    // if n is odd multiple by 3 and add 1
    // repeat until n = 1

    while (n != 1){
        cout << n << " ";
        if (n % 2 == 0){
            n = (n/2);
        }
        else{
            n = ((n*3) + 1);
        }
    }
    cout << "1" << endl;
    return 0;
}