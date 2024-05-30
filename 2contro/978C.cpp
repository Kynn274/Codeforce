#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006 
using namespace std;

ll n, m;
ll a[fmax];
ll b[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    for(ll i = 0; i < m; i++)
        for(ll j = 0; j < n; j++)
            if(b[i] <= a[j]){
                cout << j + 1 << ' ' << b[i] << '\n';
                break;
            }
            else 
                b[i] -= a[j];
    return 0;
}
