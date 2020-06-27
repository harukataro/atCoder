#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
  int N;
  cin >> N;
  pair<int,int> point[N];

  rep(i,N){
    cin >> point[i].first >> point[i].second;
  }

  double maxLengthSq = 0;
  rep(i,N){
    rep(s,N){
      double x2 = pow(point[i].first - point[s].first, 2);
      double y2 = pow(point[i].second - point[s].second, 2);
      
      if(x2 + y2 > maxLengthSq){
        maxLengthSq = x2 + y2;
      }
    }
  }
  printf("%f", pow(maxLengthSq, 0.5));
  return 0;
}
