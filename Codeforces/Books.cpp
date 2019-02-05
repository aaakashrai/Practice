#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int bin(int m, ll *s, int ind, int n)
{
  int r= n;
  int l=ind;
  int ans=-1;
  while(l<=r)
  {
    int mid= (l+r)/2;
    if(s[mid]-s[ind-1]<=m)
    {
      ans=mid;
      l=mid+1;
    }
    else
      r= mid-1;
  }
  return ans;
}

int main() {
    int n, t;
	std::ios_base::sync_with_stdio(false);
		cin.tie(NULL);
    cin >> n >> t;
    int *a= new int[n+1];
    ll *sum= new ll[n+1];
    for(int i=1;i<=n;i++)
    cin >> a[i];

    sum[0]=0;
    for(int i=1;i<=n;i++)
    sum[i]= a[i]+sum[i-1];
    int finalans= 0;
    for(int i=1;i<=n;i++)
    {
      int ans=  bin(t, sum, i, n);
      if(ans== -1)
      continue;
      else
      finalans= max(ans-i+1, finalans);
    }
    cout << finalans;
}
