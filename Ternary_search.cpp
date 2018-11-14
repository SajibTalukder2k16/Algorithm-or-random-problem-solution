#include<bits/stdc++.h>
using namespace std;
#define llu long long int
#define maxx 100000
llu ara[maxx];
llu ternary_search(int left,int right,int item)
{
    if(left>right)
        return -1;
    int mid_first=left+((right-left)/3);
    int mid_second=mid_first+((right-left)/3);
    if(ara[mid_first]==item)
        return mid_first;
    if(ara[mid_second]==item)
        return mid_second;
    if(ara[mid_first]>item)
        return ternary_search(left,mid_first-1,item);
    if(ara[mid_second]<item)
        return ternary_search(mid_second+1,right,item);
    if(ara[mid_second]>item)
        return ternary_search(mid_first+1,mid_second-1,item);

}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int i;
    cout<<"Enter the values of array: "<<endl;
    for(i=0;i<n;i++)
        cin>>ara[i];
    cout<<"Enter search item: ";
    llu search_item;
    cin>>search_item;
    cout<<ternary_search(0,n-1,search_item)<<endl;;
}
