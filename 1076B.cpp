#include<bits/stdc++.h>
using namespace std;
#define llu long long int
#define maxx 1000000000
bool marked[maxx];
vector<llu>prime;

bool isPrime(llu n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve(llu n) {
  for (llu i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (llu j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
int countDivisor(int n) {
  int divisor = 0;
  for (int i = 0; i < prime.size(); i++) {
    if (n % prime[i] == 0) {
      while (n % prime[i] == 0 && n>0) {
        n -= prime[i];
        divisor++;
        //cout<<divisor<<endl;
      }
    }
  }
  return divisor;
}

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        return 0;
    }76kl[-]
    sieve(n);
    int i;
    for(i=2;i<=n;i++)
    {
        if(isPrime(i))
            prime.push_back(i);

    }
    ///cout<<prime.size()<<endl;
    cout<<countDivisor(n)<<endl;
}

