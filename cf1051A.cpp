#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        int lower=0,higher=0,digit=0;
        string s;
        cin>>s;
        for(j=0;j<s.length();j++)
        {
            if(s[j]>='a' && s[j]<='z')lower+=1;
            if(s[j]>='A' && s[j]<='Z')higher+=1;
            if(s[j]>='0' && s[j]<='9')digit+=1;
        }
        if(lower>=1 && higher>=1 && digit>=1)
        {
            cout<<s<<endl;
            continue;
        }
        cout<<"I am coming"<<endl;
        if(lower==0 && higher>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='A' && s[j]<='Z')
                {
                    s[j]='a';
                    lower+=1;
                    break;
                }
            }
        }
        if(lower==0 && digit>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='0' && s[j]<='9')
                {
                    s[j]='a';
                    lower+=1;
                    break;
                }
            }

        }
        if(higher==0 && digit>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='0' && s[j]<='9')
                {
                    s[j]='A';
                    higher+=1;
                    break;
                }
            }
        }
        if(higher==0 && lower>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='a' && s[j]<='z')
                {
                    s[j]='A';
                    higher+=1;
                    break;
                }
            }
        }
        if(digit==0 && lower>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='a' && s[j]<='z')
                {
                    s[j]='1';
                    digit+=1;
                    break;
                }
            }
        }
        if(digit==0 && higher>=2)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]>='A' && s[j]<='Z')
                {
                    s[j]='1';
                    digit+=1;
                    break;
                }
            }
        }
        cout<<s<<endl;

    }
}
