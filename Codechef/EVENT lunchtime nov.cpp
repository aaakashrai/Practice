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

int day(string s)
{
    if(s==  "saturday")
    return 6;
    if(s== "sunday")
    return 7;
    if(s== "monday")
    return 1;
    if(s== "tuesday")
    return 2;
    if(s== "wednesday")
    return 3;
    if(s== "thursday")  
    return 4;
    if(s== "friday")
    return 5;
}

int main()
{
    fast1;
    fast2;
    int t;
    cin >> t;
    while(t--)
    {
        string s, p;
        cin >> s >> p;
        int l, r;
        cin >> l >> r;
        int st= day(s);
        int en= day(p);
        int dif;
        if(en>=st)
        dif= en-st+1;
        else
        {
            dif= en-st;
            dif= 7+dif+1;
        }
        int c=0;
        int v= dif;
        int ans=0;
        while(v<=r)
        {
            if(v>=l)
            {
                c++;
                ans=v;
            }
            v+=7;
        }
        //cout << c << endl;
        if(c==0)
        cout << "impossible\n";
        else if(c==1)
        cout << ans << endl;
        else cout << "many\n";
    }
    return 0;
}