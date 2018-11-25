#include <bits/stdc++.h>
using namespace std;
int cal(int v)
{
    int flag=0;
    int ans;
    if(v&1)
    flag=1;
    ans= v/2;
    if(flag==1)
    {
        ans+= (-1*v);
    }
    return ans;
}
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int l,r;cin >> l >> r;
       int ans= cal(r)-cal(l-1);
       cout << ans << endl;
   }
}