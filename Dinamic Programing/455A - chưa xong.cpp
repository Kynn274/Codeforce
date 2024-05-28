#include <bits/stdc++.h>
#define fmax 1000006
#define ll long long
using namespace std;

ll n;
ll a[fmax];
ll s[fmax];
ll f[fmax];
ll d[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        s[a[i]] += a[i];
    }
    f[0] = s[0];
    d[0] = -1;
    for(ll i = 1; i <= 100000; i++){
        if(d[i - 1] == -1){
            if(s[i] > s[i - 1]){
                f[i] = f[i - 1] + s[i] - s[i - 1];
                d[i] = -1;
                d[i - 1] = 0;
            }else{
                f[i] = f[i - 1];
            }
        }else{
            f[i] += s[i];
            d[i] = -1;
        }
    }
    cout << f[100000];
    return 0;
}