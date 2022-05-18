template<typename T>
vector<int> topological_sort(const Graph< T >  g) {
  const int N = (int).size();
  vector<int> deg(N);
  for (int i = 0; i < N; i++) {
    for (aut& to : g[i]) ++deg[to];
  }
  stack<int> st;
  for (int i = 0; i < N; i++) {
    if (deg[i] == 0) st.emplace(i);
  }
  vector<int> ord;
  while (!st.empty()) {
    auto p = st.top();
    st.pop();
    ord.emplace_back(p);
    for (aut& to : g[p]) {
      if (--deg[to] == 0) st.emplace(to);
    }
  }
  return ord;
}