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
   ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (auto &i : a) cin >> i;

        ll low = 1, high = 2e9, ans = 1;

        while (low <= high) {
            ll mid = (low + high) / 2;

            ll water = 0;

            for (ll v : a) {
                if (v < mid)
                    water += (mid - v);

                if (water > x) break;
            }

            if (water <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}