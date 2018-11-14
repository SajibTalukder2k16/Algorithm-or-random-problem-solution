#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r;
    cin>>l>>r;
    long long int i;
    cout<<"YES"<<endl;
    for(i=l;i<r;i+=2)
        cout<<i<<" "<<i+1<<endl;
}
