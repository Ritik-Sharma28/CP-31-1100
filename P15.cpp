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
        string s;
        cin >> s;
        int n = s.size();

        int ones = count(s.begin(), s.end(), '1');

        if (ones == 0) {
            cout << 0 << endl;
            continue;
        }

        if (ones == n) {
            cout << 1LL * n * n << endl;
            continue;
        }

        string t = s + s;

        int maxLen = 0, cur = 0;
        for (char c : t) {
            if (c == '1') {
                cur++;
                maxLen = max(maxLen, cur);
            } else {
                cur = 0;
            }
        }

        maxLen = min(maxLen, n);

        long long ans = 0;
        for (int k = 1; k <= maxLen; k++) {
            ans = max(ans, 1LL * k * (maxLen - k + 1));
        }

        cout << ans << endl;

    }

    return 0;
}







