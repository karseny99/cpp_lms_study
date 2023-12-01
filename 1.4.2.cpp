#include <bits/stdc++.h>


using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    sort(&a, &a + 3);

    if(c < a + b and b < a + c and a < b + c) {
        if(c  * c != a * a + b * b) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        } 
    }else {
        cout << "UNDEFINED\n";
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


      
    solve();



}