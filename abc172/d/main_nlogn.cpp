#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  long long N;
  cin >> N;
  long long f[N + 1] = {};
  long long ans = 0;

  rep(i, N + 1)
  {
    int j = 1;
    while (i * j <= N)
    {
      f[i * j] += 1;
      j++;
    }
  }

  for (long long i = 1; i <= N; i++)
  {
    ans += i * f[i];
  }
  cout << ans;
}
