---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructures/union-find.hpp\"\nstruct UnionFind {\n  vector<int>\
    \ data;\n\n  UnionFind() = default;\n\n  explicit UnionFind(size_t sz) : data(sz,\
    \ -1) {}\n\n  bool unite(int x, int y) {\n    x = find(x), y = find(y);\n    if\
    \ (x == y) return false;\n    if (data[x] > data[y]) swap(x, y);\n    data[x]\
    \ += data[y];\n    data[y] = x;\n    return true;\n  }\n\n  int find(int k) {\n\
    \    if (data[k] < 0) return (k);\n    return data[k] = find(data[k]);\n  }\n\n\
    \  int size(int k) {\n    return -data[find(k)];\n  }\n\n  bool same(int x, int\
    \ y) {\n    return find(x) == find(y);\n  }\n\n  vector<vector<int>> groups()\
    \ {\n    int n = (int)data.size();\n    vector<vector<int>> ret(n);\n    for (int\
    \ i = 0; i < n; i++) {\n      ret[find(i)].emplace_back(i);\n    }\n    ret.erase(remove_if(begin(ret),\
    \ end(ret), [&](const vector< int >& v) {\n      return v.empty();\n      }),\
    \ end(ret));\n    return ret;\n  }\n};\n"
  code: "struct UnionFind {\n  vector<int> data;\n\n  UnionFind() = default;\n\n \
    \ explicit UnionFind(size_t sz) : data(sz, -1) {}\n\n  bool unite(int x, int y)\
    \ {\n    x = find(x), y = find(y);\n    if (x == y) return false;\n    if (data[x]\
    \ > data[y]) swap(x, y);\n    data[x] += data[y];\n    data[y] = x;\n    return\
    \ true;\n  }\n\n  int find(int k) {\n    if (data[k] < 0) return (k);\n    return\
    \ data[k] = find(data[k]);\n  }\n\n  int size(int k) {\n    return -data[find(k)];\n\
    \  }\n\n  bool same(int x, int y) {\n    return find(x) == find(y);\n  }\n\n \
    \ vector<vector<int>> groups() {\n    int n = (int)data.size();\n    vector<vector<int>>\
    \ ret(n);\n    for (int i = 0; i < n; i++) {\n      ret[find(i)].emplace_back(i);\n\
    \    }\n    ret.erase(remove_if(begin(ret), end(ret), [&](const vector< int >&\
    \ v) {\n      return v.empty();\n      }), end(ret));\n    return ret;\n  }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/union-find.hpp
  requiredBy: []
  timestamp: '2022-05-17 17:12:10+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructures/union-find.hpp
layout: document
redirect_from:
- /library/DataStructures/union-find.hpp
- /library/DataStructures/union-find.hpp.html
title: DataStructures/union-find.hpp
---
