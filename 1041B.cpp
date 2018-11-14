#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli a,b,x,y,i,j;
    cin>>a>>b>>x>>y;
    int count=0;
    for(i=1,j=1;(i<=a && j<=b);i++,j++)
        {
            if(x*j==i*y)
                {count++;
            }
            cout<<i<<" "<<j<<endl;
        }
    cout<<count<<endl;

}
