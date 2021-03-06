#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  int A[N];
  rep(i, N) cin >> A[i];

  long long ans = 0;
  for (int i = 0; i < N - 1; i++)
  {
    for (int j = i; j < N; j++)
    {
      ans += abs(A[i] - A[j]);
    }
  }
  cout << ans << endl;
}
