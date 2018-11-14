#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    char ara[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>ara[i][j];
            if(i==0 && j==0)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i+1][j]=='W' || ara[i][j+1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==0 && j!=0 && j!=col-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i+1][j]=='W' || ara[i][j+1]=='W' || ara[i][j-1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==0 && j==col-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i][j-1]=='W' || ara[i+1][j]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(j==0 && i>0 && i<row-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i][j+1]=='W' || ara[i+1][j]=='W' || ara[i-1][j]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if((i>0 && i<row-1)&&(j>0 && j<col-1))
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i][j+1]=='W' || ara[i][j-1]=='W' || ara[i+1][j]=='W' || ara[i-1][j]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if((i>0 && i<row-1) && j==col-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i-1][j]=='W'|| ara[i+1][j]=='W' || ara[i][j-1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j==0)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i-1][j]=='W' || ara[i][j+1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j==col-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i-1][j]=='W'|| ara[i][j-1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j>0 && j<col-1)
            {
                if(ara[i][j]=='S')
                {
                    if(ara[i-1][j]=='W'|| ara[i][j+1]=='W' || ara[i][j-1]=='W')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }






            if(i==0 && j==0)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i+1][j]=='S' || ara[i][j+1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==0 && j!=0 && j!=col-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i+1][j]=='S' || ara[i][j+1]=='S' || ara[i][j-1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
        if(i==0 && j==col-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i][j-1]=='S' || ara[i+1][j]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(j==0 && i>0 && i<row-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i][j+1]=='S' || ara[i+1][j]=='S' || ara[i-1][j]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if((i>0 && i<row-1)&&(j>0 && j<col-1))
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i][j+1]=='S' || ara[i][j-1]=='S' || ara[i+1][j]=='S' || ara[i-1][j]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if((i>0 && i<row-1) && j==col-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i-1][j]=='S'|| ara[i+1][j]=='S' || ara[i][j-1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j==0)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i-1][j]=='S' || ara[i][j+1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j==col-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i-1][j]=='S'|| ara[i][j-1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
            if(i==row-1 && j>0 && j<col-1)
            {
                if(ara[i][j]=='W')
                {
                    if(ara[i-1][j]=='S'|| ara[i][j+1]=='S' || ara[i][j-1]=='S')
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }



        }
    }
    cout<<"Yes"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(ara[i][j]=='.')
                cout<<'D';
            else
                cout<<ara[i][j];
        }
        cout<<endl;
    }

}
