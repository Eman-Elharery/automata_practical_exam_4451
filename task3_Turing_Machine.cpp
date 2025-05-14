#include <bits/stdc++.h>
using namespace std;
bool check_if_accepted(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'||s[i]=='0')
        return 0;
    }
    return 1;
}
bool Turing_Machine(string s)
{
     string goal="#0101#" ,match="#abcd#";
     int tape=1,i=1;
    while(true)
    {
         if(s[tape]=='#')
        tape=1;
        if(goal[i]=='#')
        {
            i=1;
            tape=1;
        }
        if(s[tape]==goal[i])
        {
            s[tape]=match[i];
            i++;
        }
        else if(s[tape]!='#'&&s[tape]!=match[i]&&s[tape]!=goal[i-1])
        {
            return check_if_accepted(s);
        }
        tape++;
        
    }
    return check_if_accepted(s);
}

int main() {
    string str;
    cin>>str;
    str = "#" + str + "###";
    if(Turing_Machine(str))
    cout<<"Accepted";
    else
    cout<<"Rejected";
    

    return 0;
}

