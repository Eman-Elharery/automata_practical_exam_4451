#include <bits/stdc++.h>
using namespace std;
void testing ();
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
    s = "#" + s + "###";
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
    if(Turing_Machine(str))
    cout<<"Accepted"<<endl;
    else
    cout<<"Rejected"<<endl;
    //testing();
}

////////////////////////////////testing ///////////////////////////

void testing ()
{
vector<pair<string, string>> test_cases = {
    {"1100", "Rejected"},
    {"0101", "Accepted"},
    {"1111", "Rejected"},
    {"01010101", "Rejected"},
    {"00110011", "Accepted"}
};
for(int i=0;i<test_cases.size();i++)
{
    cout<<"Input : "<< test_cases[i].first<<endl;
    cout<<"Excepted Output : "<<test_cases[i].second<<endl;
    cout<<"Actual Output : ";
    if(Turing_Machine(test_cases[i].first))
     cout<<"Accepted"<<endl;
      else
     cout<<"Rejected"<<endl;
}
}
