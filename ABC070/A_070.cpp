#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t;
    t = s;
    reverse(t.begin(), t.end());
    if(s == t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}