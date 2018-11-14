#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,i,j;
    cin>>n>>m;
    int ara1[n],ara2[n];
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        cin>>ara1[i]>>ara2[i];
    }
    //ara1[i]=maxx;
    //ara2[i]=m;
    for(i=1;i<=m;i++)
    {
        int p=0;
        for(j=0;j<n;j++)
        {
             if(i>=ara1[j] && i<=ara2[j])
             {
                 p=1;
                 break;
             }
        }
        if(p==0)
            vec.push_back(i);
    }
    cout<<vec.size()<<endl;
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}
