  
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            c++;
        }
        else{
            if(c>=k)
            {
                return "YES";
            }
            c=0;
        }
    }
    if(c>=k)
    {
        return "YES";
    }
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
