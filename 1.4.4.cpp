#include <bits/stdc++.h>


using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using graph = vector< vector<int> >;

#define all(x) x.begin(), x.end()

void solve() {
    int m, n;
    cin >> m >> n;
    string flag;
    if(n % 400 == 0) {
        flag = "YES\n";
    } else if(n % 100 == 0) {
        flag =  "NO\n";
    } else if(n % 4 == 0) {
        flag = "YES\n";
    } else {
        flag =  "NO\n";
    }

    map<int, int> mp;
    mp[1] = 31;
    mp[2] = 29;
    mp[3] = 31;
    mp[4] = 30;
    mp[5] = 31;
    mp[6] = 30;
    mp[7] = 31;
    mp[8] = 31;
    mp[9] = 30;
    mp[10] = 31;
    mp[11] = 30;
    mp[12] = 31;

    if(flag == "NO\n") {
        if(m == 2) {
            cout << "28\n";
            return;
        }
    }
    cout << mp[m] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
 
}