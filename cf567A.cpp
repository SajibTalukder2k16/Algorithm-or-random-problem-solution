#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,minn,maxx,n;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
        cin>>ara[i];
    minn=ara[0];
    maxx=ara[n-1];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<ara[i+1]-ara[i]<<" "<<max((maxx-ara[i]),(ara[i]-minn))<<endl;;;

        }
        else if(i==n-1)
        {
            cout<<ara[i]-ara[i-1]<<" "<<max((maxx-ara[i]),(ara[i]-minn))<<endl;
        }
        else if(i>0 && i<n-1)
        {
            cout<<min((ara[i]-ara[i-1]),(ara[i+1]-ara[i]))<<" "<<max((maxx-ara[i]),(ara[i]-minn))<<endl;
        }
    }

}
