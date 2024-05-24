#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll n;
ll a[fmax];
ll f[fmax];
ll iC = 0;
ll ans(0);

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  for(ll i = 0; i < n; i++) cin >> a[i];
  f[0] = 1;
  for(ll i = 1; i < n; i++)
    a[i] != a[i - 1] ? f[i] = f[i - 1] + 1 : f[i] = f[i - 1];
  
  ll i = 0, j = i;
  while(i < n && j < n && i <= j){
    if(f[j] == f[i])  j++;
    else if(f[j] - f[i] == 1){
      if(f[j] != f[j - 1]) iC = j - i;
      j++;
    }else if(f[j] - f[i] == 2){
      if(f[j] != f[j - 1]) ans = max(ans, min(iC, j - i - iC) * 2);
      i++;
    }
  }

  ans = max(ans, min(iC, j - i - iC) * 2);
  cout << ans;
  return 0;
}
