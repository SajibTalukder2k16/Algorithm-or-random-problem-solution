#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[3];
    cin>>ara[0]>>ara[1]>>ara[2];
    int count=0;
    while(!((ara[0]+ara[1]>ara[2])&&(ara[1]+ara[2]>ara[0])&&(ara[2]+ara[0]>ara[1])))
    {
        sort(ara,ara+3);
        count++;
        ara[0]++;
    }
    cout<<count<<endl;
}
