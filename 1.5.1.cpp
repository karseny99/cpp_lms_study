#include <bits/stdc++.h>


using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using graph = vector< vector<int> >;

#define all(x) x.begin(), x.end()

void solve() {
    string pass;
    cin >> pass;
    if(!(8 <= pass.length() and pass.length() <= 14)) {
        cout << "NO\n";
        return;
    }

    bool fl = false, fl1 = false, fl2 = false, fl3 = false;
    for(auto el : pass) {
        // cout << el << '\n';
        if(!(33 <= el and el <= 126 )) {
            cout << "NO\n";
            return;
        }

        if('a' <= el and el <= 'z') {
            // cout << "1\n";
            fl = true;
            continue;
        }

        if('A' <= el and el <= 'Z') {
            // cout << "2\n";
            fl1 = true;
            continue;
        }
        if('0' <= el and el <= '9') {
            // cout << "3\n";
            fl2 = true;
            continue;
        }

        fl3 = true;
    }
    int c = fl3 + fl2 + fl1 + fl;
    // cout << c << endl;
    if( c >= 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

      solve();



}