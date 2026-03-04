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
       int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll prefixSum = 0;
        ll maxB = 0;
        ll answer = 0;

        for (int i = 0; i < min(n, k); i++) {
            prefixSum += a[i];             
            maxB = max(maxB, b[i]);        

            ll remaining = k - (i + 1);
            ll total = prefixSum + remaining * maxB;

            answer = max(answer, total);
        }

        cout << answer << endl;
    }

    return 0;
}