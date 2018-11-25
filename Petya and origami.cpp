#include <bits/stdc++.h>
using namespace std;
int rou(double p)
{
    int z= (int)p;
    double q= p-(double)z;
    if(q==0)
    return z;
    else
    return z+1;
}
int main()
{
    double n, k;
    cin >> n >> k;
    double a= (2*n)/k;
    double b= (5*n)/k;
    double c= (8*n)/k;
    cout << rou(a) + rou(b) + rou(c);
}