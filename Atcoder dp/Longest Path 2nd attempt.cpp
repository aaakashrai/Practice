#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v[n+1];
    int a[n+1] = {0};
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        a[y]=1;
    }
    vector<int> so;
    int visited[n+1] ={0};
    stack<int> ss;
    stack<int> ans;
    int total=0;
    int donetil = 1;
    while(total < n)
    {
        if(ss.empty())
        {
            for(int i = donetil; i<=n;i++)
            if(visited[i]==0)
            {
                //visited[i] = 1;
                donetil=i;
                ss.push(i);
            }
        }
        while(!ss.empty())
        {
            int t= ss.top();
            if(visited[t])
            {
                ss.pop();
                continue;
            }
            int len= v[t].size();
            int vis =0;
            for(int i = 0; i< len; i++)
            {
                if(visited[v[t][i]] == 1)
                vis++;
                else{
                ss.push(v[t][i]);
                 //visited[v[t][i]] = 1;
                }
            }
            if(vis == len)
            {
                ans.push(ss.top());
                visited[ss.top()]=1;
                ss.pop();
                total++;
            }
        }
    }

    int dis[n+1] = {0};
    for(int i=1;i<=n;i++){
    int t= ans.top();
    int len= v[t].size();
    for(int j=0;j<len;j++)
    {
        int p= v[t][j];
        dis[p]= max(dis[p], 1 + dis[t]);
    }
    ans.pop();
    }

    cout << *max_element(dis, dis+n+1);
}