#include <bits/stdc++.h>
#define fmax 1000006
using namespace std;

long long n;
long long a[3];
long long f[fmax];                         // Number of pieces

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(auto & x : a) cin >> x;
    
    f[0] = 1;
    for(long long i = 0; i < 3; i++)
        for(long long j = a[i]; j <= n; j++)
            if(f[j - a[i]] != 0)
                f[j] = max(f[j], f[j - a[i]] + 1);

    cout << f[n] - 1;
    return 0;
}