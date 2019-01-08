#include <bits/stdc++.h>
using namespace std;

bool alldone(int *a, int *b, int n, int &x)
{
    for(int i=x;i<=n;i++)
    if(a[i]==false && b[i]== false)
    {
        x=i;
        return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v[n+1];
    int a[n+1] = {0};
    set<int> ss;
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        a[y]=1;
    }
    int p=1;
    int dis[n+1] = {0};
    int visited[n+1] = {0};
    alldone(visited, a , n, p);
    
    queue<int> qq;
    qq.push(p);
    visited[p]=1;
    
    while(!qq.empty())
    {
        int t= qq.front();
        qq.pop();
        for(int i=0;i<v[t].size();i++)
        {
            dis[v[t][i]]= max(dis[v[t][i]], dis[t]+1);
            qq.push(v[t][i]);
            visited[v[t][i]]=1;
        }
        if(qq.empty() && !alldone(visited, a, n, p))
        {
                    qq.push(p);
                    visited[p]=1;
        }
    }
    cout << *max_element(dis, dis+n+1);
}