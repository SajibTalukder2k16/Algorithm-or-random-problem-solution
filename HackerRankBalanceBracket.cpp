#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    string a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        stack<char>st;
        for(j=0;j<a.length();j++)
        {
            if(a[j]=='(' || a[j]=='{' || a[j]=='[')
                st.push(a[j]);
            else if(a[j]==')')
            {
                if(st.size()>0)
                {
                    char ch=st.top();
                    if(ch=='(')
                        st.pop();
                }
                else
                    st.push(a[j]);
            }
            else if(a[j]=='}')
            {
                if(st.size()>0)
                {
                    char ch=st.top();
                    if(ch=='{')
                        st.pop();
                }
                else
                    st.push(a[j]);
            }
            else if(a[j]==']')
            {
                if(st.size()>0)
                {
                    char ch=st.top();
                    if(ch=='[')
                        st.pop();
                }
                else
                    st.push(a[j]);
            }

        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}
