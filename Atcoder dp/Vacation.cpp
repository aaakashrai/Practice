#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];
    for( int i=0;i<n;i++)
    cin >> a[i] >> b[i] >> c[i];
    int ans[3][n];
    ans[0][0]= a[0];
    ans[1][0]= b[0];
    ans[2][0]= c[0];
    for(int i=1;i<n;i++)
    {
        ans[0][i] = a[i] + max(ans[1][i-1], ans[2][i-1]);
        ans[1][i] = b[i] + max(ans[0][i-1], ans[2][i-1]);
        ans[2][i] = c[i] + max(ans[1][i-1], ans[0][i-1]);
    }
    cout << max(ans[0][n-1],max(ans[1][n-1], ans[2][n-1]));
}