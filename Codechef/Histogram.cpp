#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    while(n!=0)
    {
        ll *a =  new ll[n];
        for(int i=0;i<n;i++)
        cin >> a[i];

        stack<int> ss;
        ll maxe= INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(ss.empty())
            {
                ss.push(i);
            }
            else if(a[i]>=a[ss.top()])
                ss.push(i);
            else
            {
                while(!ss.empty() && a[ss.top()]>a[i])
                {
                    int t= ss.top();
                    ss.pop();
                    ll area = a[i]*(i-t);
                    maxe= max(maxe, area);
                }
                ss.push(i);
            }
        }
        while(!ss.empty())
        {
            int t= ss.top();
            ss.pop();
            ll area = a[t]*(n-t);
            maxe= max(area, maxe);
        }
        cout << maxe << endl;
    }
    return 0;
}
