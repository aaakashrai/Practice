#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 1;
    while(s[0]!= '-')
    {
        int l= s.size();
        stack<char> ss;
        int ans = 0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='{')
            ss.push(s[i]);
            else if(ss.empty() && s[i]=='}')
            {
                ss.push('{');
                ans++;
            }
            else if(!ss.empty() && s[i]=='}')
            {
                ss.pop();
            }
        }
            ans+= ss.size()/2;
            cout << i << ". " << ans<< endl;
            i++;
            cin >> s;
        }

}

