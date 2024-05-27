#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll n, m;
ll a[fmax];
ll l[fmax];
ll d[fmax];
ll f[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(ll i = 0; i < n; i++)  cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> l[i];
    for(ll i = n - 1; i >= 0; i--){
        d[a[i]] ++;
        if(d[a[i]] == 1) f[i] = f[i + 1] + 1;
        else f[i] = f[i + 1];
    }
    for(ll i = 0; i < m; i++)
        cout << f[l[i] - 1] << '\n';
    return 0;
}