#include<bits/stdc++.h>
using namespace std;
int main()
{
    double number;
    cin>>number;
    double sqrt_number=sqrt(number);
    cout<<sqrt_number<<endl;
    double ceil_sqrt=ceil(sqrt_number);
    double floor_sqrt=floor(sqrt_number);
    double x=fabs(sqrt_number-ceil_sqrt);
    double y=fabs(sqrt_number-floor_sqrt);
    cout<<ceil_sqrt<<" "<<floor_sqrt<<endl;
    if(x<y)
        cout<<ceil_sqrt<<endl;
    else
        cout<<floor_sqrt<<endl;
    cout<<x<<" "<<y<<endl;
}
