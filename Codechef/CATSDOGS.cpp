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


#define ll long long int
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
        int c,d, l;
        cin >> c >> d >> l;
        if(l%4!=0)
        {
            cout << "no\n";
            continue;
        }
        l/=4;
        l-= d;
        if(l<0)
        {
            cout << "no\n";
            continue;
        }
        
        int k= c-l;
        if(k>2*d || k<0)
        cout << "no\n";
        else
        cout << "yes\n";
    }
    return 0;
}