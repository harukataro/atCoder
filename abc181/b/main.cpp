#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int n;
  cin >> n;
  int a, b;
  ll sum = 0;
  rep(i, n)
  {
    cin >> a >> b;
    sum += ((0.5) * b * (b + 1) - (0.5) * (a - 1) * (a));
  }
  cout << sum << endl;
}
