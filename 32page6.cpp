#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int sum=0;
    int n;
    cin>>n;
    int check=1;
    int temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            temp=1;
            for(k=1;k<=j;k++)
            {
                temp*=check;
                cout<<check<<"\t";
                check++;
            }
            ///cout<<endl<<temp<<endl;
            sum+=temp;

        }
        cout<<endl;
    }
    cout<<sum<<endl;
}

