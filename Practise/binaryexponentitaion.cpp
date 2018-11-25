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


#define long long int ll
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

int cal(int n, int p)
{
    if(p==1)
    return n;
    if(p==0)
    return 1;
    if(p&1)
    {
        int res = cal(n, (p-1)/2);
        return  res*res*n;
    }
    else
    {
        int res= cal(n, p/2);
        return res*res;
    }
}


int main()
{
    while(1)
    {
        int n, p;
        cin >> n >> p;
        cout << cal(n,p) << ' ';
    }
    return 0;
}