#include <bits/stdc++.h>
using namespace std;

bool accepted (string s)
{
    if(s.size()%2)
    {
        stack<char> stk;
        for(int i=0;i<s.size();i++)
        {
            if(i<(s.size()/2))
            stk.push(s[i]);
            else if (i>(s.size()/2))
            {
                if(stk.top()==s[i])
                stk.pop();
                else
                return 0;
            }
        }
        if(stk.empty())
        return 1;
    }
    return 0;
}
 int main() 
{
  string str;
  cin>>str;
  if(accepted(str))
  cout<<"Accepted";
  else
  cout<<"Rejected";
    return 0;
}

