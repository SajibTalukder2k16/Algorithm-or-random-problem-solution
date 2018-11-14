#include<bits/stdc++.h>
using namespace std;
void merged(int ara[],int left,int mid,int right)
{
    int x=mid-left+1;
    int p=left;
    int y=right-mid;
    int l[x],r[y];
    int i,j,k;
    for(i=0;i<x;i++)
    {
        l[i]=ara[left+i];
    }
    for(i=0;i<y;i++)
    {
        r[i]=ara[mid+1+i];
    }
    for(i=0,j=0,k=0;k<(x+y);k++)
    {
        if(i<x && j<y)
        {
            if(l[i]<=r[j])
            {
                ara[left]=l[i];
                left++;
                i++;
            }
            else
            {
                ara[left]=r[j];
                left++;
                j++;
            }
        }
        else if(i<x && j>=y)
        {
            ara[left]=l[i];
            left++;
            i++;
        }
        else if(j<y && i>=x)
        {
            ara[left]=r[j];
            left++;
            j++;
        }
    }
    cout<<"bah la la la"<<endl;
    for(i=p;i<right;i++)
        cout<<ara[i]<<"\t";
    cout<<endl;
}
void merge_sort(int ara[],int left,int right)
{
    if(left>=right)
        return ;
    int mid=left+(right-left)/2;
    merge_sort(ara,left,mid);
    merge_sort(ara,mid+1,right);
    merged(ara,left,mid,right);
}
int main()
{
    int arr[]={3,4,5,1,2,6,7,10,9};
    merge_sort(arr,0,8);
    int i;
    for(i=0;i<9;i++)
        cout<<arr[i]<<"\t";
}
/**int main()
{
    int ara1[]={3,4,5,6};
    int ara2[]={1,2,7,8};
    int ara3[8];
    int i,j,k;
    for(i=0,j=0,k=0;k<8;k++)
    {
        if(i<4 && j<4)
        {
            if(ara1[i]<ara2[j])
            {
                ara3[k]=ara1[i];
                i++;
            }
            else
            {
                ara3[k]=ara2[j];
                j++;
            }
        }
        else if(i<4 && j>=4)
        {
            ara3[k]=ara1[i];
            i++;
        }
        else if(j<4 && i>=4)
        {
            ara3[k]=ara2[j];
            j++;
        }
    }
    for(i=0;i<8;i++)
        cout<<ara3[i]<<"\t";
}**/
