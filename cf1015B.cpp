#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    vector<int>vec;
    string a,b;
    cin>>n>>a>>b;
    string new1=a;
    string new2=b;
    sort(new1.begin(),new1.end());
    sort(new2.begin(),new2.end());
    if(new1!=new2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            continue;
        for(j=i+1;j<n;j++)
        {
            if(b[i]==a[j])
            {
                for(;j>i;j--)
                {
                    swap(a[j],a[j-1]);
                    vec.push_back(j);
                }
                break;
            }
        }
    }
    if(vec.size()>10000)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<vec.size()<<endl;
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";

}
