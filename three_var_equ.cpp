#include<bits/stdc++.h>
using namespace std;
double determinant(int a,int b,int c,int l,int m,int n,int p,int q,int r)
{
    double D=a*(m*r-n*q)-b*(l*r-n*p)+c*(l*q-m*p);
    return D;
}
double determinant_of_4(int a,int b,int c,int d,int l,int m,int n,int o,\
                int p,int q,int r,int s,int g,int h,int i,int j)
                {
                    int D=a*determinant(m,n,o,q,r,s,h,i,j)-b*determinant(l,n,o,p,r,s,g,i,j)\
    +c*determinant(l,m,o,p,q,s,g,h,j)-d*determinant(l,m,n,p,q,r,g,h,i);
    return D;
                }


int equation2()
{
    cout<<"ax+by=d1"<<endl;
    cout<<"px+qy=d2"<<endl;
    cout<<"Enter a,b,d1,p,q,d2 one by one: ";
    double a,b,d1,p,q,d2;
    cin>>a>>b>>d1>>p>>q>>d2;
    double x=(double)(d1*q-d2*b)/(double)(a*q-b*p);
    cout<<"X : "<<x<<endl;
    double y=(double)(a*d2-d1*p)/(double)(a*q-b*p);
    cout<<"Y : "<<y<<endl;
}
int equation3()
{
    cout<<"ax+by+cz=d1"<<endl;
    cout<<"lx+my+nz=d2"<<endl;
    cout<<"px+qy+rz=d3"<<endl;
    cout<<"Enter the value of a,b,c,d1,l,m,n,d2,p,q,r,d3 one by one: ";
    int a,b,c,d1,l,m,n,d2,p,q,r,d3;
    cin>>a>>b>>c>>d1;
    cin>>l>>m>>n>>d2;
    cin>>p>>q>>r>>d3;
    double x,y,z;
    int det=determinant(a,b,c,l,m,n,p,q,r);
    x=(double)determinant(d1,b,c,d2,m,n,d3,q,r)/(double)det;
    cout<<"X : "<<x<<endl;
    y=(double)determinant(a,d1,c,l,d2,n,p,d3,r)/(double)det;
    cout<<"Y : "<<y<<endl;
    z=(double)determinant(a,b,d1,l,m,d2,p,q,d3)/(double)det;
    cout<<"Z : "<<z<<endl;

}
int equation4()
{
    cout<<"ax+by+cz+dt=e1"<<endl;
    cout<<"lx+my+nz+ot=e2"<<endl;
    cout<<"px+qy+rz+st=e3"<<endl;
    cout<<"gx+hy+iz+jt=e4"<<endl;
    cout<<"Enter the values of a,b,c,d,e1,l,m,n,o,e2,p,q,r,s,e3,g,h,i,j,e4 one by one: ";
    double a,b,c,d,e1,l,m,n,o,e2,p,q,r,s,e3,g,h,i,j,e4;
    cin>>a>>b>>c>>d>>e1>>l>>m>>n>>o>>e2>>p>>q>>r>>s>>e3>>g>>h>>i>>j>>e4;
    double det=determinant_of_4(a,b,c,d,l,m,n,o,p,q,r,s,g,h,i,j);
    double x=determinant_of_4(e1,b,c,d,e2,m,n,o,e3,q,r,s,e4,h,i,j)/det;
    cout<<"X : "<<x<<endl;
    double y=determinant_of_4(a,e1,c,d,l,e2,n,o,p,e3,r,s,g,e4,i,j)/det;
    cout<<"Y : "<<y<<endl;
    double z=determinant_of_4(a,b,e1,d,l,m,e2,o,p,q,e3,s,g,h,e4,j)/det;
    cout<<"Z : "<<z<<endl;
    double t=determinant_of_4(a,b,c,e1,l,m,n,e2,p,q,r,e3,g,h,i,e4)/det;
    cout<<"T : "<<t<<endl;
    ///a*determinant(m,n,o,q,r,s,h,i,j)-b*determinant(l,n,o,p,r,s,g,i,j)\
    +c*determinant(l,m,o,p,q,s,g,h,j)-d*determinant(l,m,n,p,q,r,g,h,i);


}
int main()
{
    int n;
    cout<<"Enter number of variables: ";
    cin>>n;
    if(n==2)
        equation2();
    else if(n==3)
        equation3();
    else if(n==4)
        equation4();


}
