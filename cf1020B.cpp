#include<bits/stdc++.h>
using namespace std;
vector<int>vec_node[10000];
int check[10000];
void bfs(int u,int v)
{
    check[u]=v;
    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<vec_node[p].size();i++)
        {
            int x=vec_node[p][i];
            if(check[x]==v)
            {
                cout<<x<<" ";
                return;
            }
            check[x]=v;
            q.push(x);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int i,a;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        vec_node[i].push_back(a);
    }
    for(i=1;i<=n;i++)
        bfs(i,i);
}
