#include <bits/stdc++.h>
#define ll long long
#define fmax 1000006
using namespace std;

ll t;
ll n, l, r;
vector<ll> a;

void merge(vector<ll> a1, vector<ll> a2, vector<ll> & a){
    ll m(a1.size()), n(a2.size()), i(0), j(0);
    a.clear();
    
    while(i < m && j < n)
      a1[i] < a2[j] ? a.push_back(a1[i++]) : a.push_back(a2[j++]);
    while(i < m) a.push_back(a1[i++]);
    while(j < n) a.push_back(a2[j++]);
    
}

void mergeSort(vector<ll> &a){
    ll s(0), e(a.size()), m = (s + e) / 2;
    if(m != s){
        vector<ll> a1;
        vector<ll> a2;
        for(ll i = s; i < m; i++) a1.push_back(a[i]);
        for(ll i = m; i < e; i++) a2.push_back(a[i]);
        mergeSort(a1);
        mergeSort(a2);
        merge(a1, a2, a);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        ll iC(0), x;
        cin >> n >> l >> r;
        for(ll i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        mergeSort(a);
        ll i = 0; j = n - 1;
        while(i < j){
            if(a[i] + a[j] < l) i++;
            else if(a[i] + a[j] > r) j--;
            else{
                iC += j - i;
                i++;
            }
        }
        cout << iC << '\n';
    }
    return 0;
}