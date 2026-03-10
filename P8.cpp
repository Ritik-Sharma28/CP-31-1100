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
        ll n, k ,s ,e;
        cin >> n >> k>> s >> e;

        vector<ll> x(n+1) , y(n+1);
        for( int i = 1 ; i <= n ; i++){
            cin >> x[i] >> y[i];
        }

        ll mini_k = 1e17;
        ll mini_e = 1e17;
        ll ans = abs(x[s] - x[e]) + abs(y[s] - y[e]);

        for (int i = 1; i <= k; i++) {
		mini_k = min(mini_k, abs(x[s] - x[i]) + abs(y[s] - y[i]));
		mini_e = min(mini_e, abs(x[e] - x[i]) + abs(y[e] - y[i]));
	   }

        ans = min ( ans , mini_k + mini_e);
        cout << ans << endl;
    }

    return 0;
}
