#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a= new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int *b= new int[n];
	b[0] =0;
	b[1]= abs(a[1]-a[0]);
	for(int i=2;i<n;i++)
	{
		b[i]= min(b[i-1]+ abs(a[i-1]+a[i]), b[i-2]+ abs(a[i-2]-a[i]));
	}
	cout << b[n-1] << endl;
}