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
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int l = 0, r = n - 1;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                r = i;
                break;
            }
        }

        while (r + 1 < n && b[r] <= b[r + 1]) {
            r++;
        }

        while (l - 1 >= 0 && b[l - 1] <= b[l]) {
            l--;
        }

        cout << l + 1 << " " << r + 1 << endl;

    }

    return 0;
}







