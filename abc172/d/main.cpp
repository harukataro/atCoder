#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

long long g(long long n){
  return (n *(n +1))/2;
}

int main()
{
  long long N;
  cin >> N;
  long long ans = 0;

  for (long long i = 1; i <= N; i++)
  {
    long long n = (ll)(N / i);
    ans += i * g(n);
  }
  cout << ans;
}
