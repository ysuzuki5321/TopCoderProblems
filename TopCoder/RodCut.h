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
class RodCut
{
public:
	RodCut();
	~RodCut();
	int Calc(int N, vector<int> value) {

		int dp[100];
		for (size_t i = 0; i < 100; i++)
		{
			dp[i] = 0;
		}
		for (size_t i = 1; i <= N; i++)
		{
			for (size_t j = 1; j <= value.size(); j++)
			{
				if (i >= j) {
					dp[i] = max(dp[i - j] + value[j - 1], dp[i]);
				}
			}
		}
		return dp[N];
	}
};

