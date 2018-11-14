#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k,p;
    p=(2*n)-1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(n-i);j++)
            cout<<".";
        for(j=1;j<=((p-(2*(n-i)))/2);j++)
            cout<<j;
        for(;j>=1;j--)
            cout<<j;
        for(j=1;j<=(n-i);j++)
            cout<<".";
        cout<<endl;
    }
}
