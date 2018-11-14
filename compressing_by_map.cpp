#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    cout<<mp.size()<<endl;
    string ara[5];
    int i;
    for(i=0;i<5;i++)
        cin>>ara[i];
    int assign=0;
    int output[5];
    for(i=0;i<5;i++)
    {
        if(mp.find(ara[i])==mp.end())
        {
            mp[ara[i]]=assign;
            cout<<ara[i]<<"   "<<assign<<endl;
            assign++;
        }
        output[i]=mp[ara[i]];
    }
    cout<<endl<<endl;
    for(i=0;i<5;i++)
        cout<<output[i]<<"\t";
    cout<<endl;

}
