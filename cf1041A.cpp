#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,minn,a,maxx;;
    cin>>n;
    long long int ara[n];
    minn=100000000000;
    maxx=-1;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<minn)
            minn=a;
        if(a>maxx)
            maxx=a;
    }
    cout<<maxx-minn-n+1<<endl;


}
