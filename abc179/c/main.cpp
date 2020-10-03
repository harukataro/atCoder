#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;

  int sum = 0;
  for (int i = 1; i < N; i++)
  {
    sum += (N - 1) / i;
  }
  cout << sum << endl;
}
