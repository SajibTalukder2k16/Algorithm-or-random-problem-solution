#include<bits/stdc++.h>
using namespace std;
int partion(int ara[],int low,int high)
{
    int pivot=ara[high];
    int i,j,t;
    for(i=low-1,j=low;j<high;j++)
    {
        if(ara[j]<pivot)
        {
            i++;
            t=ara[i];
            ara[i]=ara[j];
            ara[j]=t;
        }
    }
    i++;
    t=ara[i];
    ara[i]=pivot;
    ara[high]=t;
    return i;
}
void quick_sort(int ara[],int low,int high)
{
    if(low>=high)
        return;
    int p=partion(ara,low,high);
    quick_sort(ara,low,p-1);
    quick_sort(ara,p+1,high);
}
int main()
{
    int ara[]={4,5,3,2,1,7,6,8,9};
    int i;
    for(i=0;i<9;i++)
        cout<<ara[i]<<"\t";
    cout<<endl;
    quick_sort(ara,0,8);
    for(i=0;i<9;i++)
        cout<<ara[i]<<"\t";
    cout<<endl;

}
