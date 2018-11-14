#include<bits/stdc++.h>
using namespace std;
#define minn -10000
int weight[100];
int cost[100];
int n,capacity;
int ara[100][100]={0};
int knapsack(int i,int w)
{
    int profit1,profit2;
    if(i==n)
        return 0;
    else if(ara[i][w]==0)
        {
        if(weight[i]+w<=capacity)
            profit1=cost[i]+knapsack(i+1,w+weight[i]);
        else
            profit1=0;
        profit2=knapsack(i+1,w);
        ara[i][w]=max(profit1,profit2);
        }
    return ara[i][w];;
}
int main()
{
    ///memset(ara,-10000,sizeof(ara));
    cin>>n>>capacity;
    int i;
    for(i=0;i<n;i++)
        cin>>weight[i]>>cost[i];
    cout<<knapsack(0,0);
}
