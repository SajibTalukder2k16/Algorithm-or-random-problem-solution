#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int sum=0;
    int n;
    cin>>n;
    int check=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<check<<"\t";
            sum+=check;
            check++;

        }
        cout<<endl;
    }
    cout<<sum<<endl;
}
