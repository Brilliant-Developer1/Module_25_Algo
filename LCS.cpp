// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int dp[1005][1005];
int lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (a[n - 1] == b[m - 1])
    {
        int ans = lcs(a, n - 1, b, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int ans1 = lcs(a, n - 1, b, m);
        int ans2 = lcs(a, n, b, m - 1);
        return dp[n][m] = max(ans1, ans2);
    }
}
int main()
{

    string a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    cout << lcs(a, a.size(), b, b.size());
    return 0;
}