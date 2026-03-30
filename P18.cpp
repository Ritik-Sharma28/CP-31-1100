#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const ll MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    while(t--){
        int n;
        ll c;
        cin >> n >> c;

        vector<ll> a(n), cost(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cost[i] = a[i] + (i + 1);
        }

        sort(cost.begin(), cost.end());

        int ans = 0;
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            if (sum + cost[i] <= c) {
                sum += cost[i];
                ans++;
            } else {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}







