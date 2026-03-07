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
        cin >> n;

        vector<ll> a(n+1), pref(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }

        ll ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k) continue;

            ll mn = LLONG_MAX;
            ll mx = LLONG_MIN;

            for (int i = k; i <= n; i += k) {
                long long sum = pref[i] - pref[i-k];
                mn = min(mn, sum);
                mx = max(mx, sum);
            }

            ans = max(ans, mx - mn);
        }

        cout << ans << endl;
    }

    return 0;
}