#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int c=0;
        int finalans=0;
        stack<char> ss;
        ss.push('.');
        int l= s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='<')
            {
                ss.push('<');
            }
            else if(s[i]=='>' && ss.top() == '.')
            break;
            else if(s[i]=='>' && ss.top() == '<')
            {
                c+=2;
                ss.pop();
            }

            if(ss.top() == '.')
            finalans = c;
        }
        cout <<finalans;
    }
}
