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
        // element prefix sum index answer
        vector<pair<int , pair<ll,pair<int,int>>>> v(n);
        for (int i = 0; i < n; i++){
           cin >> v[i].first;
           v[i].second.first = v[i].first;
           v[i].second.second.first = i;
        }
        sort(v.begin() , v.end());
        
        for( int i = 1 ; i < n ; i++){
                v[i].second.first+=v[i-1].second.first;
        }

        vector<int> ans(n);
        ans[ v[n-1].second.second.first ] = n-1;

        v[n-1].second.second.second = n - 1;

        for( int i = n-2 ; i >= 0 ; i--){
                ll prefix = v[i].second.first;
                int curr_element = v[i].first;
                int next_element = v[i+1].first;
                int index = v[i].second.second.first;
                int answer = v[i+1].second.second.second;

                if( prefix >= next_element ){
                    v[i].second.second.second = answer;
                    ans[index] = answer;
                } else {
                     v[i].second.second.second = i;
                    ans[index] = i;
                }
        }

        for( int i = 0 ; i < n ; i++){
            cout << ans[i] << " " ;
        }

        cout << endl;
    }

    return 0;
}