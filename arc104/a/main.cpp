#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int A, B;
  cin >> A >> B;

  for (int x = -100; x <= 100; x++)
  {
    for (int y = -100; y <= 100; y++)
    {
      if (x + y == A && x - y == B)
      {
        cout << x << " " << y << endl;
      }
    }
  }
}
