#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double range=a+b+c;
    double s=range/2.0;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    double angle1=(acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b)))*180/acos(-1);
    double angle2=(acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*180/acos(-1);
    double angle3=(acos((pow(c,2)+pow(a,2)-pow(b,2))/(2*c*a)))*180/acos(-1);
    cout<<angle1<<" "<<angle2<<" "<<angle3<<endl;
    cout<<angle1+angle2+angle3<<endl;
    cout<<area<<endl;
}
