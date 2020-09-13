#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

ll SOSU = 1000000007;

int main()
{
  int n, k;
  int a;
  cin >> n >> k;
  multiset<long long> A;
  rep(i, n){
    cin >> a;
    A.insert(a);
  } 

  rep(bit, (1 << n))
  {
    if (__builtin_popcount(bit) != k)
      continue;
    ll aa = -1000000000;
    ll a = -1000000000;
    ll b = 0;
    rep(i, n)
    {
      if (bit & (1 << i))
      {
        if (a != -1000000000)
        {
          a *= A[i];
          b *= A[i];
          if (b >= SOSU || b <= -1 * SOSU)
          {
            a += b / SOSU;
            b = b- (b/ SOSU)*SOSU;
          }
          if(a >= SOSU2 || a <= -1 * SOSU2){
            aa += a / SOSU2;
            a = a - (a/SOSU2) * SOSU2;
          }
        }
        else
        {
          a = A[i] / SOSU;
          b = A[i] % SOSU;
        }
        //cout << a << " " << b << endl;
      }
    }
    if (aa > aa_max || 
        (aa == aa_max && a > a_max) ||
        (aa == aa_max && a == a_max && b > b_max)
        )
    {
      aa_max = aa;
      a_max = a;
      b_max = b;
    }
  }
  if(b_max <0) b_max += SOSU;
  cout << b_max << endl;
}
