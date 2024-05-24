#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;
 
ll n;
ll a[fmax];
unsigned long long f[fmax];            
unsigned long long _max = 0;
 
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  for(ll i = 0; i < n; i++) cin >> a[i];
  
  f[0] = a[0];
  for(ll i = 1; i < n; i++)
    f[i] = f[i - 1] + a[i];
  
  ll i = 0, j = n - 2;
  while(i <= j){
    //cout << i << ' ' << j << '\n';
    if(f[i] > f[n - 1] - f[j])  j--;
    else if(f[i] < f[n - 1] - f[j]) i++;
    else{
      _max = max (_max, f[i]);
      j--;
      i++;
    }
  }
  cout << _max;
  return 0;
}
