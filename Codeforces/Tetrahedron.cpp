#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
# define  mod 1000000007

int main() {
    int n;
    cin >> n;
    ll a[n+1][4];
    a[0][0]=1;
    a[0][1]=0;
    a[0][2]=0;
    a[0][3]=0;
    for(int i=1;i<=n;i++)
    {
      a[i][0]= (a[i-1][1]+a[i-1][2]+a[i-1][3])%mod;
      a[i][1]= (a[i-1][0]+a[i-1][2]+a[i-1][3])%mod;
      a[i][2]= (a[i-1][1]+a[i-1][0]+a[i-1][3])%mod;
      a[i][3]= (a[i-1][1]+a[i-1][2]+a[i-1][0])%mod;
    }
    cout << a[n][0];
return 0;
}
