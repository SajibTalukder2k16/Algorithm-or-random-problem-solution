#include<bits/stdc++.h>
using namespace std;
int main()
{
    string equ;
    cin>>equ;
    int a=0,b=0,c=0,d=0;
    int len=equ.length();;
    int i=0;
    int t1=0,t2=0,t3=0,t4=0;
    if(equ[i]=='-')
    {
        i++;
        t1=1;
    }
    while(equ[i]!='x')
    {
        a=a*10+(equ[i]-48);
        i++;
    }
    i++;
    if(a==0)
        a=1;
    if(t1==1)
        a=-a;
    if(equ[i]=='-')
    t2=1;
    i++;

    ///cout<<i<<endl;

    while(equ[i]!='y')
    {
        b=b*10+(equ[i]-48);
        i++;
    }
    if(b==0)
        b=1;
    if(t2==1)
        b=-b;
    i+=1;
    if(equ[i]=='-')
        t3=1;
    i++;



    while(equ[i]!='z')
    {
        c=c*10+(equ[i]-48);
        i++;
    }
    if(c==0)
        c=1;
    if(t3==1)
        c=-c;
    i+=2;
    if(equ[i]=='-')
        {t4=1;
        i++;
        }
    ///i++;

    while(i<len)
    {

        d=d*10+(equ[i]-48);
        i++;
    }
    if(t4==1)
        d=-d;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
