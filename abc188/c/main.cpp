#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  int n = pow(N, 2);
  vector<int> x(n);
  vector<int> num(n);
  rep(i, n)
  {
    cin >> x[i];
    num[i] = i + 1;
  }

  for (int i = 0; i < N - 1; i++)
  {
    int j = x.size() - 1;
    while (j >= 1)
    {
      //cout << j << " " << x[j] << "," << x[j - 1] << endl;
      if (x[j] > x[j - 1])
      {
        x.erase(x.begin() + j - 1);
        num.erase(num.begin() + j - 1);
      }
      else
      {
        x.erase(x.begin() + j);
        num.erase(num.begin() + j);
      }
      j = j - 2;
    }
  }
  //cout << x[0] << "," << x[1] << endl;
  if (x[0] > x[1])
    cout << num[1] << endl;
  else
    cout << num[0] << endl;
}
