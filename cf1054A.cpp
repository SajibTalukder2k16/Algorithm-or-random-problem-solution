#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    int time_elevator=(abs(x-z))*t2;
    time_elevator+=3*t3;
    time_elevator+=(abs(x-y))*t2;
    int time_stairs=(abs(x-y))*t1;
    ///cout<<time_stairs<<" "<<time_elevator<<endl;
    if(time_elevator<=time_stairs)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
