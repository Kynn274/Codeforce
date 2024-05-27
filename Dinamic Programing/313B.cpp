#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

string s;
ll n;
ll l[fmax];
ll r[fmax];
ll f[fmax];

int main(){
    cin >> s;
    cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    
    for(ll i = 0; i < s.size() - 1; i++)
        if(s[i] == s[i + 1]) f[i] = f[i - 1] + 1;
        else f[i] = f[i - 1];
    for(ll i = 0; i < n; i++)
        cout << f[r[i] - 1] - f[l[i] - 1] << '\n';
}