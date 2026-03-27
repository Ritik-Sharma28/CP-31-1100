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
       int n ;
       cin >> n;

       vector<int> v(n);

       for( auto &i:v) cin >> i;

       sort(v.begin() , v.end());

       if( n == 1 && v[0] > 1 || v[0] != 1) {
        cout << "No" << endl;
        continue;
       } 

       ll sum = v[0];
       bool ans = true;

       for( int i = 1; i < n ; i++){
        if(sum < v[i]){
            ans = false;
            break;
        } else {
            sum+=v[i];
        }
       }

       if( ans ) cout << "yes" << endl;
       else cout << "No" << endl;

    }

    return 0;
}







