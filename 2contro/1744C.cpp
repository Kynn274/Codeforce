#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll n, t;
ll f[fmax];
char a[fmax];
char x;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll firstgreen = -1;
        for(ll i = 0; i < n; i++)
            if(a[i] == 'g'){
                firstgreen = i;
                break;
            }
        for(ll i = 0; i < n; i++)
            if(a[i] == 'g') f[i] = 0;
            else if(i == 0) f[i] = 1;
            else if(f[i - 1] != 0) f[i] = f[i - 1] + 1;
            else if(a[i] == x) f[i] = 1;
            else f[i] = 0;
        
        ll i(0), j(0), iC(0);
        bool flag(0);
        while(i < n && j < n){
            if(a[i] == x) flag = 1;
            if(flag == 1){
                if(a[j] == 'g'){
                    iC = max(iC, f[j - 1] - f[i - 1]);
                    if(x != 'g') flag = 0;
                    j++;
                    i = j;
                }else j++;
            }else{
              i++;
              j++;
            }
        }
        if(flag == 1 && f[n - 1] != 0) iC = max(iC, f[n - 1] + f[firstgreen - 1]);
        cout << iC << '\n'; 
    }
    return 0;
}