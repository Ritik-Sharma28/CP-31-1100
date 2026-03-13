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
        ll k;
        cin >> n >> k;

        vector<ll> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin() , v.end());

        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + v[i];
        }

        ll ans = 0;
        for (int i = 0; i <= k; i++) {
            
            int left_removed = 2 * i;
            int right_removed = k - i;
            
            ll current_sum = pref[n - right_removed] - pref[left_removed];
            ans = max(ans, current_sum);
        }
        
        cout << ans << endl;
    }

    return 0;
}


