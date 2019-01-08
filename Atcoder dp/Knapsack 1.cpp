#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, w;
    cin >> n >> w;
    int *we =  new int[n+1];
    int *val =  new int[n+1];
    we[0]=0;
    val[0]=0;
    for(int i = 1;i <= n;i++)
    cin >> we[i] >> val[i];
    ll ans[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        ans[i][0] = 0;
    }

    for(int i=0;i<=w;i++)
    {
        ans[0][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(j-we[i]>=0)
            ans[i][j] =  max(ans[i-1][j], val[i] + ans[i-1][j-we[i]]);
            else
            ans[i][j]= ans[i-1][j];
        }
    }


    cout << ans[n][w];
}
