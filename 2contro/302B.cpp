#include <bits/stdc++.h>
#define fmax 1000006
#define ll long long
using namespace std;

ll n, m;
ll c[fmax], t[fmax], v[fmax];
ll f[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(ll i = 0; i < n; i++) cin >> c[i] >> t[i];
    for(ll i = 0; i < m; i++) cin >> v[i];

    for(ll i = 0; i < n; i++)
        f[i] = f[i - 1] + t[i] * c[i];

    ll i(0), j(0);
    while(i < m && j < n){
        if(v[i] <= f[j]){
            cout << j + 1 << '\n';
            i++;
        }else
            j++;
    }
    return 0;
}