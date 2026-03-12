#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        ll cur = 0;

        for (int i = 0; i < n; i++) {
            if ((a[i] | x) != x) break;
            cur |= a[i];
        }

        for (int i = 0; i < n; i++) {
            if ((b[i] | x) != x) break;
            cur |= b[i];
        }

        for (int i = 0; i < n; i++) {
            if ((c[i] | x) != x) break;
            cur |= c[i];
        }

        if (cur == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}


