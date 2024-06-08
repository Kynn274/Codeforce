#include <bits/stdc++.h>
#define fmax 1000006
#define ll long long
using namespace std;

ll t, n, s;
ll a[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> s;
        for(ll i = 0; i < n; i++) cin >> a[i];
        
        ll i(0), j(0), sum(a[0]), len(0);
        while(j < n){
            if(sum == s)
                len = max(len, j - i + 1);
            
            if(sum <= s){
                j++;
                sum += a[j];
            }
            else if(sum > s){
                sum -= a[i];
                i++;
            }
        }
        if(len == 0) cout << -1 << '\n';
        else cout << n - len << '\n';
    }
    return 0;
}