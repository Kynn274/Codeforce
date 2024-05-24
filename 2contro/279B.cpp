#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll n, t;
ll a[fmax];
ll f[fmax];
ll iC = 0;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n >> t;
  for(ll i = 0; i < n; i++) cin >> a[i];
  f[0] = a[0];
  for(ll i = 1; i < n; i++) f[i] = f[i - 1] + a[i];
  
  ll i = 0, j = 0;
  while(i < n && j < n && i <= j){
    if(t >= f[j] - f[i] + a[i]){
      iC = max(iC, j - i + 1);
      j++;
    }
    else{
      i++;
      j++;
    }
  }
  
  cout << iC;
  return 0;
}
