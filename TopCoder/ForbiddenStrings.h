#pragma once
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <concurrent_priority_queue.h>
typedef long long i64;
using namespace std;
class ForbiddenStrings
{
public:
	ForbiddenStrings();
	~ForbiddenStrings();
	long long countNotForbidden(int n) {

		n -= 1;
		long long dp[3][31];
		for (size_t i = 0; i < 3; i++)
		{
			dp[i][0] = 0;
		}

		dp[0][0] = 3;
		long long res = 3;
		for (size_t i = 0; i < n; i++)
		{

			dp[0][i + 1] = dp[0][i] + dp[1][i];
			dp[1][i + 1] = (dp[0][i] * 2) + dp[1][i];
			dp[2][i + 1] = dp[1][i];
			res *= 3;
			res -= dp[2][i + 1];
		}

		return res;
	}
};

