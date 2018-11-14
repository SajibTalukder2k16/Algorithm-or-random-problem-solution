#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=(n*2)-1;
    int i,j,k;
    for(i=1;i<=n;i++)
    {

            for(k=1;k<=(n-i);k++)
                cout<<".";
            for(k=1;k<=(p-2*(n-i));k++)
                cout<<"*";
            for(k=1;k<=(n-i);k++)
                cout<<".";
            cout<<endl;
    }
}
