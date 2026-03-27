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
       int n  , k;
       cin >> n >> k;

       vector<vector<int>> v(n ,vector<int>(n));

       for( auto &i:v) {
        for( auto &j:i) cin >> j;
       }

     //  vector<vector<int>> upside(n ,vector<int>(n));

    //   for( int i = 0 ; i < n ; i++){
    //     for( int j = 0 ; j < n ; j++){
    //         upside[n-i-1][n-j-1] = v[i][j];
    //     }
    //   }

       ll cnt = 0;

        for( int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
            if( v[i][j] != v[n-i-1][n-j-1]) cnt++;
        }
       }


        cnt /= 2;

        if(cnt > k){
            cout << "NO" << endl;
        }
        else{
            if(n % 2 == 1 || (k - cnt) % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }



    }

    return 0;
}







