#include <iostream>

using namespace std;

string decode(string s)
{
    string ss="";
    ss+=s[0];
    int count=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            continue;
        }
        ss+=to_string(count);
        ss+=s[i];
        count =1;
    }
    ss+=to_string(count);

    return ss;
}

int main()
{
    string s;
    cin>>s;
    cout<<decode(s)<<endl;
    return 0;
}