#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[]={4,3,5,1,4};
    int counting[6]={0,0,0,0,0,0};
    int i,j;
    for(i=0;i<5;i++)
    {
        counting[ara[i]]++;
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<counting[i];j++)
        {
            cout<<i<<"\t";
        }
    }
}
