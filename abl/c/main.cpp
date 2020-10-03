#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N, K;
  cin >> N >> K;
  int A[N];
  rep(i, N) cin >> A[i];

  int len = 1;
  int lastNum = A[0];

  for (int i = 1; i < N; i++)
  {
    if (abs(A[i] - lastNum) <= K)
    {
      len++;
      lastNum = A[i];
    }
  }
  cout << lastNum;
}
