#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll a[] = {1, 5, 10, 20, 100};
ll b[5];

int main(){
    cin >> n;
    ll i = 4;
    while(i >= 0 && n != 0){
        b[i] = n / a[i];
        n %= a[i];
        i--;
    }
    ll num(0);
    for(ll i = 0; i < 5; i++)
        num += b[i];
    cout << num;
    return 0;
}