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
        ll n, c;
        cin >> n >> c;

        vector<ll> s(n);
        for (auto &x : s) cin >> x;

        ll l = 1, r = 1e9;

        while (l <= r) {
            ll mid = (l + r) / 2;

            __int128 sum = 0;

            for (auto x : s) {
                ll side = x + 2 * mid;
                sum += (__int128)side * side;

                if (sum > c) break;
            }

            if (sum <= c)
                l = mid + 1;
            else
                r = mid - 1;
        }

        cout << r << endl;
    }

    return 0;
}


