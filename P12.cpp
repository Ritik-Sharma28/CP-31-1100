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

    while (t--) {
        int n;
        cin >> n;

        vector<ll>a(n), b(n);

        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll ans = 1;
        int used = 0;

        for(int i=n-1;i>=0;i--){
            int pos = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
            int valid = n - pos;

            int choices = valid - used;

            if(choices<=0){
                ans = 0;
                break;
            }

            ans = (ans * choices) % MOD;
            used++;
        }

        cout << ans << endl;
    }

    return 0;
}







