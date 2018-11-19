#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  //no of nodes
  vector < pair < int , pair < int, int > > > v;
  int e;
  cin >> e;
  //no of edges
  int x, y, w;
  for(int i=0;i<e;i++)
  {
    cin >> w >> y >> x;
    v.push_back(make_pair(w, make_pair(x,y)));
  }
  sort(v.begin(), v.end());
  int *visited= new int[n];
  for(int i=0;i<n;i++)
  visited[i]=0;
  vector< pair < int, int > > ans;
  ans.push_back(v[0].second);
  //includ first node
  visited[v[0].second.first]=1;
  visited[v[0].second.second]=1;
  for(int j=2;j<n;j++)
  {
    int i=1;
      for(;i<e;i++)
      {
        if((visited[v[i].second.first]==1 || visited[v[i].second.second]==1) && !((visited[v[i].second.first]==1 && visited[v[i].second.second]==1)))
        break;
        //if one vertice is visited but not both
      }
      visited[v[i].second.first]=1;
      visited[v[i].second.second]=1;
      ans.push_back(v[i].second);
      //insert edge
  }
  for(int i=0;i<ans.size();i++)
  cout << ans[i].first << "   " << ans[i].second << endl;
  return 0;
}
