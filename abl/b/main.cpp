#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  if ((C <= B && A <= D) || (B <= C && D <= A))
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
}
