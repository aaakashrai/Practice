#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k;
	cin >> n >> k;
	int *a = new int[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int *b = new int[n];
	b[0]=0;
	for(int i=1;i<n;i++)
	{
		int ans= INT_MAX;
		for(int j=1;j<=k;j++)
		{
			if(i-j < 0)
			break;
			ans= min(ans, b[i-j] + abs(a[i]-a[i-j]));
		}
		b[i]=ans;
	}
	cout << b[n-1];
}
			
	