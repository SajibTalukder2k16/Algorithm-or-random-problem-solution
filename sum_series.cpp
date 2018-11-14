#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"1+2+3+....+"<<n<<"\t=\t";
    cout<<(n*(n+1))/2<<endl<<endl;;
    cout<<"1^2+2^2+3^2+....+"<<n<<"^2\t=\t"<<(n*(n+1)*(2*n+1))/6<<endl<<endl;;
    cout<<"1^3+2^3+3^3+....+"<<n<<"^3\t=\t"<<(n*n*(n+1)*(n+1))/4<<endl<<endl;;
    cout<<"1+3+5+....+(2*"<<n<<"+1)\t=\t"<<n*n<<endl<<endl;;
    cout<<"2+4+6+....+2"<<*n<<"\t=\t"<<n*(n+1)<<endl;

}
