#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  string a, b;
  cin >> a >> b;

  int aSum = 0;
  int bSum = 0;
  for (int i = 0; i < a.size(); i++)
    aSum += a[i] - '0';
  for (int i = 0; i < b.size(); i++)
    bSum += b[i] - '0';

  if (aSum > bSum)
    cout << aSum << endl;
  else
  {
    cout << bSum << endl;
  }
}
