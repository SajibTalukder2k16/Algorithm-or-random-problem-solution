#include<bits/stdc++.h>
using namespace std;
void counting(int ara[],int n,int et)
{
    int output[n],i;
    int ct[10]={0};
    for(i=0;i<n;i++)
    {
        ct[(ara[i]/et)%10]++;
    }
    for(i=1;i<10;i++)
    {
        ct[i]+=ct[i-1];
    }
    //for(i=n-1;i>=0;i--)
    for(i=0;i<n;i++)
    {
        output[ct[(ara[i]/et)%10]-1]=ara[i];
        ct[(ara[i]/et)%10]--;
    }
    for(i=0;i<n;i++)
        ara[i]=output[i];
    for(i=0;i<n;i++)
        cout<<ara[i]<<"\t";
    cout<<endl;

}
int get_max(int arr[],int n)
{
    int mx=arr[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
            mx=arr[i];
    }
    return mx;
}
void radix_sort(int arr[],int n)
{
    int m=get_max(arr,n);
    int i;
    for(i=1;(m/i)>0;i*=10)
        counting(arr,n,i);
}
int main()
{
    int ara[]={5,60,3,4,12,345,1,2};
    int n=sizeof(ara)/sizeof(ara[0]);
    radix_sort(ara,n);
    int i;
    for(i=0;i<n;i++)
        cout<<ara[i]<<"\t";

}
