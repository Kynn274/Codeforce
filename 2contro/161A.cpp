#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006 
using namespace std;

ll n, m, x, y;
ll a[fmax];
ll b[fmax];
vector<ll> soldier;
vector<ll> vests;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> x >> y;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll j = 0; j < m; j++) cin >> b[j];

    ll i(0), j(0);
    ll iC(0);
    while(i < n && j < m){
        if(b[j] <= a[i] + y && b[j] >= a[i] - x){
            iC++;
            soldier.push_back(i + 1);
            vests.push_back(j + 1);
            j++;
            i++;
        }else if(b[j] > a[i] + y) i++;
        else if(b[j] < a[i] - x) j++;
    }
    cout << iC << '\n';
    for(i = 0; i < iC; i++)
        cout << soldier[i] << ' ' << vests[i] << '\n';
    return 0;
}
