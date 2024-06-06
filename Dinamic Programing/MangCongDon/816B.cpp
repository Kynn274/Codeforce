#include <bits/stdc++.h>
#define arrsize 1000006
#define ll long long
using namespace std;

ll n, k, q, _max(0), _dem(0);
ll l[arrsize], r[arrsize], a[arrsize], b[arrsize];
ll f[arrsize];
ll g[arrsize];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k >> q;
    for(ll i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        f[l[i]] += 1;
        f[r[i] + 1] -= 1;
    }
    for(ll i = 0; i < q; i++){
         cin >> a[i] >> b[i];
         _max = max(_max, b[i]);
    }
    for(ll i = 1; i <= _max; i++)
        f[i] += f[i - 1];
    for(ll i = 0; i <= _max; i++)
        f[i] >= k ? g[i] = g[i - 1] + 1 : g[i] = g[i - 1]; 
    for(ll i = 0; i < q; i++)
        g[a[i]] != g[a[i] - 1] ? cout << g[b[i]] - g[a[i]] + 1 << '\n' : cout << g[b[i]] - g[a[i]] << '\n';      
    return 0;
}