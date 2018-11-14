#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,p;
    cin>>s;
    p=s;
    ///int len=s.length();
    char ara[n+1];
    char ara_new[n+1];
    strcpy(ara, s.c_str());;
    strcpy(ara_new, s.c_str());;
    int i;
    for(i=0;i<n;i++)
    {
        p=p.erase(i,1);
        strcpy(ara_new, p.c_str());
        p=s;
        if(!lexicographical_compare(ara,ara+(strlen(ara)),ara_new,ara_new+(strlen(ara_new))))
            strcpy(ara,ara_new);
    }
    cout<<ara<<endl;

}
