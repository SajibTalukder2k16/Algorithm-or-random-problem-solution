#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int i,j;
    bool go[n];
    bool come[n];
    for(i=0;i<n;i++)
    {
        cin>>go[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>come[i];
    }
    if(go[0]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(go[s-1]==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(come[s-1]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=s-1;i<n;i++)
    {
        if(come[s-1]==1 && go[i]==1 && come[i]==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
