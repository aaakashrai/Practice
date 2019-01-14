#include <bits/stdc++.h>

using namespace std;

void printmat(const vector<int>& v)
{
    int n= v.size();
    for(int i=0;i<n;i++)
    cout << v[i] << " ";
    cout << endl;
}

int docal(vector<int> v)
{
    int n= v.size();
    stack<int> ss;
    vector<int> ans(n);
    ans[0]= -1;
    for(int i=0;i<n;i++)
    {
        if(ss.empty())
        {
            ans[i]= -1;
            ss.push(i);
        }
        else if(v[i]<v[ss.top()])
        {
            ans[i]= ss.top();
            ss.push(i);
        }
        else
        {
            while(!ss.empty() && v[ss.top()]<=v[i])
            ss.pop();
            if(ss.empty())
            {
                ans[i]=-1;
            }
            else
                ans[i]= ss.top();
            ss.push(i);
        }
    }
    int maxe= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ans[i]==-1)
        continue;
        int p= v[i]^v[ans[i]];
        maxe= max(maxe, p);
    }
    return maxe;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin >> v[i];
    int a = docal(v);
    reverse(v.begin(), v.end());
    int b = docal(v);
    cout<< max(a,b);
}
