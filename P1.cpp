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
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        bool seen[26] = {};
        long long ans = 0;
        
        for(int i = 0; i < n; i++){
            int c = s[i] - 'a';
            if(!seen[c]){           
                seen[c] = true;
                ans += (long long)(n - i);  
            }
        }
        cout << ans << endl;
    }

    return 0;
}