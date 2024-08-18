#include <bits/stdc++.h>
#define fmax 1000006
#define ll long long
using namespace std;

ll n, d;
ll a[fmax];
unsigned long long iC(0);



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> d;
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    ll i(0), j(2);
    while(j < n){
        if(a[j] - a[i] <= d) iC += (j - i - 1);
        if(a[j] - a[i] <= d || j < i + 2) j++;
        else{
            i++;
            j = i + 2;
        }
    }
    i++;
    while(i < n - 2){
        j = i + 2;
        while(j < n){
          iC += (j - i - 1);
          j++;
        }
        i++;
    }
    cout << iC;
    
    return 0;
}