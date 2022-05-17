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
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n\n#include \"Template/template.hpp\"\n#include \"../Utility/fastIO.hpp\"\n#include\
    \ \"DataStructures/dualsegtree.hpp\"\n\nint f(int a, int b) {\n  if (b != INT32_MAX)\n\
    \    return b;\n  else\n    return a;\n}\nint e() { return INT32_MAX; }\n\nint\
    \ main() {\n  int n, q;\n  cin >> n >> q;\n\n  DualSegmentTree<int, f, e> seg(n);\n\
    \  int c, L, R, x;\n  while (q--) {\n    cin >> c;\n    if (c == 0) {\n      cin\
    \ >> L >> R >> x;\n      R++;\n      seg.update(L, R, x);\n    }\n    else {\n\
    \      cin >> x;\n      cout << seg.query(x) << nl;\n    }\n  }\n  return 0;\n\
    }"
  dependsOn: []
  isVerificationFile: true
  path: Verify/AOJ_DSL_2_D.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AOJ_DSL_2_D.test.cpp
layout: document
redirect_from:
- /verify/Verify/AOJ_DSL_2_D.test.cpp
- /verify/Verify/AOJ_DSL_2_D.test.cpp.html
title: Verify/AOJ_DSL_2_D.test.cpp
---
