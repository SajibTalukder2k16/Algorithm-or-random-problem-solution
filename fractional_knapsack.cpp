#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vec;
priority_queue<pair<double,int>>pr;
int main()
{
    int n,capacity;
    cin>>n>>capacity;
    int i,weight,cost;
    for(i=0;i<n;i++)
    {
        cin>>weight>>cost;
        vec.push_back(make_pair(weight,cost));
    }
    for(i=0;i<n;i++)
    {
        double unit_profit=(double)(vec[i].second)/(double)(vec[i].first);
        pr.push(make_pair(unit_profit,i));

    }
    pair<double,int>front_pr;
    //tt=pr.top();
    //cout<<tt.first<<" "<<tt.second;
    double total_profit=0;
    while(!pr.empty()&&capacity!=0)
    {
        front_pr=pr.top();
        pr.pop();
        int item_weight=vec[front_pr.second].first;
        if(capacity>=item_weight)
        {
            total_profit+=vec[front_pr.second].second;
            capacity-=item_weight;
        }
        else
        {
            total_profit+=capacity*front_pr.first;
            break;
        }
    }
    cout<<total_profit<<endl;
}
