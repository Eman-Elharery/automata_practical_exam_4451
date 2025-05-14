#include <bits/stdc++.h>
using namespace std;
void testing ();
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
  cout<<"Accepted"<<endl;
  else
  cout<<"Rejected"<<endl;
  testing();
    return 0;
}

////////////////////////////////testing ///////////////////////////

void testing ()
{
vector<pair<string, string>> test_cases = {
    {"1100", "Rejected"},
    {"101", "Accepted"},
    {"1111", "Rejected"},
    {"110111", "Rejected"},
    {"01010", "Accepted"}
};
for(int i=0;i<test_cases.size();i++)
{
    cout<<"Input : "<< test_cases[i].first<<endl;
    cout<<"Excepted Output : "<<test_cases[i].second<<endl;
    cout<<"Excepted Output : ";
    if(accepted(test_cases[i].first))
     cout<<"Accepted"<<endl;
      else
     cout<<"Rejected"<<endl;
}
}

