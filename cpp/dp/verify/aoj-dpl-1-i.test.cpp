#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_I"

#include "../../template/template.cpp"

#include "../knapsack-limitations.cpp"

#include "../knapsack-limitations-2.cpp"

int main() {
  int N;
  int64 W;
  cin >> N >> W;
  vector< int > v(N);
  vector< int64 > w(N), m(N);
  for(int i = 0; i < N; i++) {
    cin >> v[i] >> w[i] >> m[i];
  }
  cout << knapsack_limitations(w, m, v, W) << endl;
}