//Template

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <bits/stdc++.h>


typedef long long int ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi> 
#define rep(i,n) for(int i=0;i<n;i++)
#define fi first
#define se second
#define fast1 ios_base::sync_with_stdio(false)
#define fast2 cin.tie(NULL);
inline void pin(int n) { printf("%d\n",n); }
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        priority_queue <int, vector<pair< int, int > >, greater<pair<int, int> > >pq;
        rep(i, n){
        int x;
        cin >> x;
        //currprice   original
        pq.push(make_pair(x,x));
        }
        int ans= INT_MAX;
        int fr=-1;
        while(m--)
        {
            pair<int, int > p = pq.top();
            pq.pop();
            ans= p.fi;
            p.fi+= p.se;
            pq.push(p);
        }
        cout << ans << endl;
    }
}