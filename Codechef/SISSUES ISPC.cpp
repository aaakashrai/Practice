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

int main()
{
    fast1;
    fast2;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        int flag=0;
        rep(i,n)
        {
            if(s[i]=='+')
            st.push(1);
            if(s[i]=='-')
            {
                if(st.empty())
                {
                    flag=1;
                    break;
                }
                else
                st.pop(); 
            }
        }
        if(flag==0)
        cout << "MAYBE YOU ARE SAFE\n";
        else
        cout << "FIND A NEW JOB\n";
    }
    return 0;
}