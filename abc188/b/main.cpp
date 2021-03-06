#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  int a[N];
  int b[N];
  int sum = 0;
  rep(i, N) cin >> a[i];
  rep(i, N) cin >> b[i];
  rep(i, N) sum += (a[i] * b[i]);

  if (sum == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
