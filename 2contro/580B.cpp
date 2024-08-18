#include <bits/stdc++.h>
#define fmax 1000006
#define ll long long
using namespace std;

ll n, d;
ll m[fmax], s[fmax];
ll f[fmax];

void merge(ll a1[], ll a2[], ll a[], ll m, ll n, ll & p){
    a.memset(0);
    ll i(0), j(0), p(0);
    while(i < m && j < n)
        a1[i] < a2[j]? a[p++] = a1[i++] : a[p++] = a2[j++];
    while(i < m) a[p++] = a1[i++];
    while(j < n) a[p++] = a2[j++];
}

void mergeSort(ll a[], ll & s, ll & e){
    ll m = (s + e)/2;
    if(m != s){
        ll a1s(0), a2s(0);
        ll a1[fmax], a2[fmax];
        for(ll i = 0; i < m; i++) a1[a1s++] = a[i];
        for(ll i = m; i < e; i++) a2[a2s++] = a[i];

        mergeSort(a1, s, a1s);
        mergeSort(a2, m, a2s);
        merge(a1, a2, a, a1s, a2s, e);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll _mi (1e9), _ma (-1e9);
    ll _max(-1e9);
    
    cin >> n >> d;
    for(ll i = 0; i < n; i++) cin >> m[i] >> s[i];
    // for(ll i = n - 1; i >= 0; i--){
    //     f[i] = s[i];
    //     _mi = m[i];
    //     _ma = m[i];
    //     for(ll j = i + 1; j < n; j++)
    //         if(abs(_mi - m[j]) < d && abs(_ma - m[j]) < d){
    //           f[i] += s[j];
    //           _mi = min (_mi, m[j]);
    //           _ma = max (_ma, m[j]);
    //         }
    // }
    

    // for(ll i = 0; i < n; i++)
    //      _max = max(f[i], _max);
    // cout << _max;

    
    return 0;
}