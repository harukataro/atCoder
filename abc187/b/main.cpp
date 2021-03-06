#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  float x[N];
  float y[N];
  rep(i, N) cin >> x[i] >> y[i];

  int sum = 0;
  rep(i, N)
      rep(j, N)
  {
    if (i > j)
      continue;
    float slope = (y[j] - y[i]) / (x[j] - x[i]);
    if (-1 <= slope && slope <= 1)
      sum++;
  }
  cout << sum << endl;
}
