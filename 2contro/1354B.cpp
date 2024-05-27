#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll n;
ll f[fmax];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        for(ll i = 0; i < s.size(); i++)
            f[s[i]]++;
        ll i(0), j(s.size() - 1);
        if(f['1'] < 1 || f['2'] < 1 || f['3'] < 1) cout << 0 << '\n';
        else{
            while(f['1'] >= 1 && f['2'] >= 1 && f['3'] >= 1){
                //cout << i << ' ' << j << '\n';
                if(f[s[i]] == 1 && f[s[j]] == 1) break;
                if(f[s[i]] > 1){
                  f[s[i]]--;
                  i++;
                }
                if(f[s[j]] > 1){
                  f[s[j]]--;
                  j--;
                }
            }
            cout << j - i + 1 << '\n';
        }
        f['1'] = f['2'] = f['3'] = 0;
    }
    return 0;
}