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
       int n ;
       cin >> n ;

       vector<int> a(n);

       for( auto &i:a) cin >> i;

       ll cur = a[0], best = a[0];

       for(int i = 1; i < n; i++){
            if( (abs(a[i]) & 1) != (abs(a[i-1]) & 1 ) ){
                cur = max((ll)a[i], cur + a[i]);
            } else {
                cur = a[i];
            }
            best = max(best, cur);
        }
        cout << best << endl;
    }

    return 0;
}