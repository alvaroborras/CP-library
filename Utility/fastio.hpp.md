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
  bundledCode: "#line 1 \"Utility/fastio.hpp\"\n\nnamespace IO {\n  constexpr bool\
    \ UNSAFE = false;\n  constexpr int GLOB_BUF_SIZE = 1 << 14;\n#ifndef DEBUG\n#define\
    \ CHANGE_DEFAULT_STREAMS\n  static struct FastInput {\n    FastInput() {\n   \
    \   if constexpr (UNSAFE) {\n        chars_read = fread(buf, 1, BUF_SIZE, in);\n\
    \        buf_pos = 0;\n        buf[0] = (chars_read == 0?-1:buf[0]);\n      }\n\
    \    }\n    static constexpr int BUF_SIZE = GLOB_BUF_SIZE;\n    char buf[BUF_SIZE];\n\
    \    size_t chars_read = 0;\n    size_t buf_pos = 0;\n    FILE* in = stdin;\n\
    \    char cur = 0;\n    inline char get_char() {\n      if constexpr (!UNSAFE)\
    \ {\n        if (buf_pos >= chars_read) {\n          chars_read = fread(buf, 1,\
    \ BUF_SIZE, in);\n          buf_pos = 0;\n          buf[0] = (chars_read == 0?-1:buf[0]);\n\
    \        }\n      }\n      return cur = buf[buf_pos++];\n    }\n    template <typename\
    \ T>\n    inline FastInput* tie(T) { return this; }\n    inline void sync_with_stdio(bool)\
    \ {}\n    inline explicit operator bool() { return cur != -1; }\n    inline static\
    \ bool is_blank(char c) { return c <= ' '; }\n    inline bool skip_blanks() {\n\
    \      while (is_blank(cur) && cur != -1) get_char();\n      return cur != -1;\n\
    \    }\n    inline FastInput& operator>>(char& c) {\n      skip_blanks();\n  \
    \    c = cur;\n      return *this;\n    }\n    inline FastInput& operator>>(std::string&\
    \ s) {\n      if (skip_blanks()) {\n        s.clear();\n        do {\n       \
    \   s += cur;\n        } while (!is_blank(get_char()));\n      }\n      return\
    \ *this;\n    }\n    template <typename T>\n    inline FastInput& read_integer(T&\
    \ n) {\n      // unsafe, doesn't check that characters are actually digits\n \
    \     n = 0;\n      if (skip_blanks()) {\n        int sign = +1;\n        if (cur\
    \ == '-') {\n          sign = -1;\n          get_char();\n        }\n        do\
    \ {\n          n += n + (n << 3) + cur - '0';\n        } while (!is_blank(get_char()));\n\
    \        n *= sign;\n      }\n      return *this;\n    }\n    template <typename\
    \ T>\n    inline typename std::enable_if<std::is_integral<T>::value,\n      FastInput&>::type\n\
    \      operator>>(T& n) {\n      return read_integer(n);\n    }\n#if !defined(_WIN32)\
    \ || defined(_WIN64)\n    inline FastInput& operator>>(__int128& n) { return read_integer(n);\
    \ }\n#endif\n    template <typename T>\n    inline typename std::enable_if<std::is_floating_point<T>::value,\n\
    \      FastInput&>::type\n      operator>>(T& n) {\n      // not sure if really\
    \ fast, for compatibility only\n      n = 0;\n      if (skip_blanks()) {\n   \
    \     std::string s;\n        (*this) >> s;\n        sscanf(s.c_str(), \"%lf\"\
    , &n);\n      }\n      return *this;\n    }\n  } fast_input;\n#define cin IO::fast_input\n\
    \  static struct FastOutput {\n    static constexpr int BUF_SIZE = GLOB_BUF_SIZE;\n\
    \    char buf[BUF_SIZE];\n    size_t buf_pos = 0;\n    static constexpr int TMP_SIZE\
    \ = GLOB_BUF_SIZE;\n    char tmp[TMP_SIZE];\n    FILE* out = stdout;\n    inline\
    \ void put_char(char c) {\n      buf[buf_pos++] = c;\n      if (buf_pos == BUF_SIZE)\
    \ {\n        fwrite(buf, 1, buf_pos, out);\n        buf_pos = 0;\n      }\n  \
    \  }\n    ~FastOutput() { fwrite(buf, 1, buf_pos, out); }\n    inline FastOutput&\
    \ operator<<(char c) {\n      put_char(c);\n      return *this;\n    }\n    inline\
    \ FastOutput& operator<<(const char* s) {\n      while (*s) put_char(*s++);\n\
    \      return *this;\n    }\n    inline FastOutput& operator<<(const std::string&\
    \ s) {\n      for (auto x : s) put_char(x);\n      return *this;\n    }\n    template\
    \ <typename T>\n    inline char* integer_to_string(T n) {\n      // beware of\
    \ TMP_SIZE\n      char* p = tmp + TMP_SIZE - 1;\n      if (n == 0)\n        *--p\
    \ = '0';\n      else {\n        bool is_negative = false;\n        if (n < 0)\
    \ {\n          is_negative = true;\n          n = -n;\n        }\n        while\
    \ (n > 0) {\n          *--p = (char)('0' + n % 10);\n          n /= 10;\n    \
    \    }\n        if (is_negative) *--p = '-';\n      }\n      return p;\n    }\n\
    \    template <typename T>\n    inline typename std::enable_if<std::is_integral<T>::value,\
    \ char*>::type\n      stringify(T n) {\n      return integer_to_string(n);\n \
    \   }\n#if !defined(_WIN32) || defined(_WIN64)\n    inline char* stringify(__int128\
    \ n) { return integer_to_string(n); }\n#endif\n    template <typename T>\n   \
    \ inline typename std::enable_if<std::is_floating_point<T>::value,\n      char*>::type\n\
    \      stringify(T n) {\n      sprintf(tmp, \"%.17f\", n);\n      return tmp;\n\
    \    }\n    template <typename T>\n    inline FastOutput& operator<<(const T&\
    \ n) {\n      auto p = stringify(n);\n      for (; *p != 0; p++) put_char(*p);\n\
    \      return *this;\n    }\n  } fast_output;\n#define cout IO::fast_output\n\
    #endif\n}  // namespace IO\n"
  code: "\nnamespace IO {\n  constexpr bool UNSAFE = false;\n  constexpr int GLOB_BUF_SIZE\
    \ = 1 << 14;\n#ifndef DEBUG\n#define CHANGE_DEFAULT_STREAMS\n  static struct FastInput\
    \ {\n    FastInput() {\n      if constexpr (UNSAFE) {\n        chars_read = fread(buf,\
    \ 1, BUF_SIZE, in);\n        buf_pos = 0;\n        buf[0] = (chars_read == 0?-1:buf[0]);\n\
    \      }\n    }\n    static constexpr int BUF_SIZE = GLOB_BUF_SIZE;\n    char\
    \ buf[BUF_SIZE];\n    size_t chars_read = 0;\n    size_t buf_pos = 0;\n    FILE*\
    \ in = stdin;\n    char cur = 0;\n    inline char get_char() {\n      if constexpr\
    \ (!UNSAFE) {\n        if (buf_pos >= chars_read) {\n          chars_read = fread(buf,\
    \ 1, BUF_SIZE, in);\n          buf_pos = 0;\n          buf[0] = (chars_read ==\
    \ 0?-1:buf[0]);\n        }\n      }\n      return cur = buf[buf_pos++];\n    }\n\
    \    template <typename T>\n    inline FastInput* tie(T) { return this; }\n  \
    \  inline void sync_with_stdio(bool) {}\n    inline explicit operator bool() {\
    \ return cur != -1; }\n    inline static bool is_blank(char c) { return c <= '\
    \ '; }\n    inline bool skip_blanks() {\n      while (is_blank(cur) && cur !=\
    \ -1) get_char();\n      return cur != -1;\n    }\n    inline FastInput& operator>>(char&\
    \ c) {\n      skip_blanks();\n      c = cur;\n      return *this;\n    }\n   \
    \ inline FastInput& operator>>(std::string& s) {\n      if (skip_blanks()) {\n\
    \        s.clear();\n        do {\n          s += cur;\n        } while (!is_blank(get_char()));\n\
    \      }\n      return *this;\n    }\n    template <typename T>\n    inline FastInput&\
    \ read_integer(T& n) {\n      // unsafe, doesn't check that characters are actually\
    \ digits\n      n = 0;\n      if (skip_blanks()) {\n        int sign = +1;\n \
    \       if (cur == '-') {\n          sign = -1;\n          get_char();\n     \
    \   }\n        do {\n          n += n + (n << 3) + cur - '0';\n        } while\
    \ (!is_blank(get_char()));\n        n *= sign;\n      }\n      return *this;\n\
    \    }\n    template <typename T>\n    inline typename std::enable_if<std::is_integral<T>::value,\n\
    \      FastInput&>::type\n      operator>>(T& n) {\n      return read_integer(n);\n\
    \    }\n#if !defined(_WIN32) || defined(_WIN64)\n    inline FastInput& operator>>(__int128&\
    \ n) { return read_integer(n); }\n#endif\n    template <typename T>\n    inline\
    \ typename std::enable_if<std::is_floating_point<T>::value,\n      FastInput&>::type\n\
    \      operator>>(T& n) {\n      // not sure if really fast, for compatibility\
    \ only\n      n = 0;\n      if (skip_blanks()) {\n        std::string s;\n   \
    \     (*this) >> s;\n        sscanf(s.c_str(), \"%lf\", &n);\n      }\n      return\
    \ *this;\n    }\n  } fast_input;\n#define cin IO::fast_input\n  static struct\
    \ FastOutput {\n    static constexpr int BUF_SIZE = GLOB_BUF_SIZE;\n    char buf[BUF_SIZE];\n\
    \    size_t buf_pos = 0;\n    static constexpr int TMP_SIZE = GLOB_BUF_SIZE;\n\
    \    char tmp[TMP_SIZE];\n    FILE* out = stdout;\n    inline void put_char(char\
    \ c) {\n      buf[buf_pos++] = c;\n      if (buf_pos == BUF_SIZE) {\n        fwrite(buf,\
    \ 1, buf_pos, out);\n        buf_pos = 0;\n      }\n    }\n    ~FastOutput() {\
    \ fwrite(buf, 1, buf_pos, out); }\n    inline FastOutput& operator<<(char c) {\n\
    \      put_char(c);\n      return *this;\n    }\n    inline FastOutput& operator<<(const\
    \ char* s) {\n      while (*s) put_char(*s++);\n      return *this;\n    }\n \
    \   inline FastOutput& operator<<(const std::string& s) {\n      for (auto x :\
    \ s) put_char(x);\n      return *this;\n    }\n    template <typename T>\n   \
    \ inline char* integer_to_string(T n) {\n      // beware of TMP_SIZE\n      char*\
    \ p = tmp + TMP_SIZE - 1;\n      if (n == 0)\n        *--p = '0';\n      else\
    \ {\n        bool is_negative = false;\n        if (n < 0) {\n          is_negative\
    \ = true;\n          n = -n;\n        }\n        while (n > 0) {\n          *--p\
    \ = (char)('0' + n % 10);\n          n /= 10;\n        }\n        if (is_negative)\
    \ *--p = '-';\n      }\n      return p;\n    }\n    template <typename T>\n  \
    \  inline typename std::enable_if<std::is_integral<T>::value, char*>::type\n \
    \     stringify(T n) {\n      return integer_to_string(n);\n    }\n#if !defined(_WIN32)\
    \ || defined(_WIN64)\n    inline char* stringify(__int128 n) { return integer_to_string(n);\
    \ }\n#endif\n    template <typename T>\n    inline typename std::enable_if<std::is_floating_point<T>::value,\n\
    \      char*>::type\n      stringify(T n) {\n      sprintf(tmp, \"%.17f\", n);\n\
    \      return tmp;\n    }\n    template <typename T>\n    inline FastOutput& operator<<(const\
    \ T& n) {\n      auto p = stringify(n);\n      for (; *p != 0; p++) put_char(*p);\n\
    \      return *this;\n    }\n  } fast_output;\n#define cout IO::fast_output\n\
    #endif\n}  // namespace IO\n"
  dependsOn: []
  isVerificationFile: false
  path: Utility/fastio.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Utility/fastio.hpp
layout: document
redirect_from:
- /library/Utility/fastio.hpp
- /library/Utility/fastio.hpp.html
title: Utility/fastio.hpp
---
