#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int a, b;
  cin >> a >> b;

  if (abs(a - b) < 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
