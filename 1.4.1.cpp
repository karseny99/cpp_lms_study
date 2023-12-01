#include <bits/stdc++.h>


using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using graph = vector< vector<int> >;

#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == c or b == d) {
        cout << "YES\n";
    } else if(c - a == d - b) {
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