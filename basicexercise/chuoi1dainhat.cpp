#include <iostream>
#include <string>

using namespace std;

int check(char a[],int n,int k)
{
    int left=0,right=0,ans=0,used=0,pos=0;
    while(right<n)
    {
        if( a[right]=='0'&&(used<=k))
        {
            used++;
            if(used==1) pos=right;
            right++;
            continue;
        }
        if(a[right]=='0'&&used==k)
        {
            if(right-left-1>ans) ans=right-left-1;
            left=pos;
            right=left;
            used=0;
            cout<<"l:"<<left<<endl;
        }
        right++;
    }
    return ans;
}

int main()
{
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    int n=0;
    char a[100];
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='1'||s[i]=='0')
      {
        a[n]=s[i];
        n++;
      }
    }
    
    cout<<check(a,n,k);
    return 0;
}