#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    llu a,b,p;
    p=-100;
    llu i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        p=max(p,a+b);
    }
    cout<<p<<endl;

}
