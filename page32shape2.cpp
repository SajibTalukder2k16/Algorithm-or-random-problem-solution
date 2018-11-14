#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
            cout<<".";
        ///cout<<endl;
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}

