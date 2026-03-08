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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (auto &v : a) cin >> v;

        int mn = 31;
        vector<int> useful;

        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;

            if (x < mn) {
                useful.push_back(x);
                mn = x;
            }
        }

        for (int x : useful) {
            ll div = 1LL << x;
            ll add = 1LL << (x - 1);

            for (int i = 0; i < n; i++) {
                if (a[i] % div == 0) {
                    a[i] += add;
                }
            }
        }

        for (auto v : a) cout << v << " ";
        cout << endl;
    }

    return 0;
}