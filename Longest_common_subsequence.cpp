#include<bits/stdc++.h.
using namespace std;
#define maxx 10000
char A[maxx];
char B[maxx];
int lenA,lenB;
bool visited[maxx][maxx];
int dp[maxx][maxx];
void
int calcLCS(int i,int j)
{
    if(A[i]=='\0' || B[j]=='\0')
        return 0;
    if(visited[i][j])
        return dp[i][j];
    int ans=0;
    if(A[i]==B[j])ans+=calcLCS(i+1,j+1);
    else
    {
        int val1=calcLCS(i,j+1);
        int val2=calcLCS(i+1,j);
        ans=max(val1,val2);
    }
    visited[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];

}
