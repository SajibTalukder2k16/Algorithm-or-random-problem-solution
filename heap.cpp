#include<iostream>
using namespace std;
int get_left(int i)
{
    return 2*i;
}
int get_right(int i)
{
    return 2*i+1;
}
int get_parent(int i)
{
    return i/2;
}
int check_max_heap(int ara[],int heap_size)
{
    int i,j;
    for(i=heap_size;i>1;i--)
    {
        j=get_parent(i);
        cout<<"i= "<<i <<"  j  = "<<j<<"  ara[i]  ="<<ara[i]<<" ara[j] = "<<ara[j]<<endl;
        if(ara[j]<ara[i])
            return 0;
    }
    return 1;
}
void max_heapify(int ara[],int heap_size,int i)
{
    int l=get_left(i);
    int r=get_right(i);
    int largest=i;
    if(l<=heap_size && ara[l]>ara[i])
        largest=l;
    if(r<=heap_size && ara[r]>ara[largest])
        largest=r;
    if(largest!=i)
    {
        int p=ara[largest];
        ara[largest]=ara[i];
        ara[i]=p;
        max_heapify(ara,heap_size,largest);
    }
}
void print_heap(int ara[],int heap_size)
{
    int i;
    for(i=1;i<=heap_size;i++)
        cout<<ara[i]<<"\t";
    cout<<endl;
}
void build_heap(int ara[],int heap_size)
{
    int i;
    for(i=heap_size/2;i>=1;i--)
    {
        max_heapify(ara,heap_size,i);
    }
}
int main()
{
    int arr[]={0,19,7,12,3,5,17,10,1,2,3,4,21,42};
    int heap[12];
    print_heap(arr,13);
    build_heap(arr,13);
    int heap_size=13;
    int i,j=0;
    while(heap_size>=1)
    {
        heap[j]=arr[1];
        j++;
        arr[1]=arr[heap_size];
        heap_size--;
        build_heap(arr,heap_size);
    }
    for(i=0;i<13;i++)
        cout<<heap[i]<<"\t";

}
