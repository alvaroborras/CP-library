---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.4/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../Utility/fastIO.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/persistent_unionfind\"\n\
    \n#include \"../Template/template.hpp\"\n#include \"../Utility/fastIO.hpp\"\n\
    #include \"../DataStructures/persistent-array.hpp\"\n#include \"../DataStructures/persistent-union-find.hpp\"\
    \n\nint main() {\n  int N, Q;\n  cin >> N >> Q;\n  vector<PersistentUnionFind>\
    \ uf(Q + 1);\n  uf[0] = PersistentUnionFind(N);\n  for (int i = 1; i <= Q; i++)\
    \ {\n    int t, k, u, v;\n    cin >> t >> k >> u >> v;\n    ++k;\n    if (t ==\
    \ 0) {\n      uf[i] = uf[k];\n      uf[i].unite(u, v);\n    }\n    else {\n  \
    \    cout << (uf[k].find(u) == uf[k].find(v)) << \"\\n\";\n    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Verify/LC_persistent_union_find.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_persistent_union_find.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_persistent_union_find.test.cpp
- /verify/Verify/LC_persistent_union_find.test.cpp.html
title: Verify/LC_persistent_union_find.test.cpp
---
