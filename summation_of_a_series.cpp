#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i*(n-i+1);
    }
    cout<<sum<<endl;
}
