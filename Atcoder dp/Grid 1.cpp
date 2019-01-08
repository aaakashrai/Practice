#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    char grid[h+2][w+2];
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        cin >> grid[i][j];
    }

    int ans[h+2][w+2];
    
    for(int i=0;i<h+2;i++)
    {
        for(int j=0;j<w+2;j++)
        ans[i][j] = 0;
    }
    ans[0][1] = 1;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(grid[i][j] == '#')
            continue;
            ans[i][j]= (ans[i-1][j]+ ans[i][j-1])%1000000007;
        }
    }
    cout << ans[h][w];
    return 0;
}
