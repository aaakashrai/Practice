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
    ll ans[2][w+1];
    for(int i=0;i<=1;i++)
    {
        ans[i][0] = 0;
    }

    for(int i=0;i<=w;i++)
    {
        ans[0][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        int t= i%2;
        if(t==1)
        {
            for(int j=1;j<=w;j++)
            {
                if(j-we[i]>=0)
                ans[t][j] =  max(ans[t-1][j], val[i] + ans[t-1][j-we[i]]);
                else
                ans[t][j]= ans[t-1][j];
            }
        }
        else
        {
            for(int j=1;j<=w;j++)
            {
                if(j-we[i]>=0)
                ans[t][j] =  max(ans[t+1][j], val[i] + ans[t+1][j-we[i]]);
                else
                ans[t][j]= ans[t+1][j];
            }
        }
    }

    if(n%2)
    cout << ans[1][w];
    else
    cout << ans[0][w];
}
