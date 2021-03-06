#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;
void chmin(int &a, int b)
{
  if (a > b)
  {
    a = b;
  }
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  for (auto &h : H)
    cin >> h;
  vector<int> W(M);
  for (auto &w : W)
    cin >> w;

  sort(H.begin(), H.end());

  vector<int> sum1((N + 1) / 2); //累積和リスト　下から
  vector<int> sum2((N + 1) / 2); //累積和リスト　上から

  for (int i = 0; i + 1 < N; i += 2)
  {
    sum1[i / 2 + 1] = sum1[i / 2] + H[i + 1] - H[i];
  }

  for (int i = N - 2; i > 0; i -= 2)
  {
    sum2[i / 2] = sum2[i / 2 + 1] + H[i + 1] - H[i];
  }

  int ans = INF;
  for (int w : W) // wは可変の先生の大きさリスト
  {
    int x = lower_bound(H.begin(), H.end(), w) - H.begin(); //２分岐イテレータ出して、初期イテレータを引いて何番目の場所か計算
    if (x & 1)
      x ^= 1;                                               // もし xの最小ビットが１ならばXORを取る。
    int _total = sum1[x / 2] + sum2[x / 2] + abs(H[x] - w); // 可変先生の値を入れて計算し、上から下からの累積和で挟む
    chmin(ans, _total);                                     // ansを最小値で更新していく
  }
  cout << ans << endl;
}