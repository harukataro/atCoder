#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int h, w;
  cin >> h >> w;
  int a[h][w];

  int min = 101;
  int in;
  int sum = 0;
  rep(i, h) rep(j, w)
  {
    cin >> in;
    if (min > in)
      min = in;
    sum += in;
  }
  cout << sum - min * h * w << endl;
}
