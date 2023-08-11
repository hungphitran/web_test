#include <iostream>

using namespace std;

int check(string s)
{
    int left=0;
    int right=s.length()-1;
    while(left<right)
    {
        if (s[left]!=s[right]) return 0;
        left++;
        right--;
    }

    return 1;
}

int main()
{
    string s;
    getline(cin,s);
    if(check(s))
    {
        cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;
    return 0;
}