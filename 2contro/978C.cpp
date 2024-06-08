#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006 
using namespace std;

ll n, m;
ll a[fmax];
ll b[fmax];
ll f[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    for(ll i = 0; i < n; i++)
        f[i] = f[i - 1] + a[i];
        
    ll j(0), i(0);
    while(j < n && i < m)
        if(b[i] <= f[j]){
            cout << j + 1 << ' ' << b[i] - f[j - 1] << '\n';
            i++;
        }
        else j++;
    
    return 0;
}
