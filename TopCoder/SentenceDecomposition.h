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
class SentenceDecomposition
{
public:
	SentenceDecomposition();
	~SentenceDecomposition();
	int decompose(string sentence, vector<string> validWords) {

		int dp[51];
		int n = sentence.size();
		for (int i = 0; i <= n; i++) dp[i] = 10000;
		dp[0] = 0;
		for (size_t i = 1; i <= n; i++)
		{
			for (size_t j = 0; j < validWords.size(); j++)
			{
				if (i >= validWords[j].size()) {
					int si = validWords[j].size();
					if (dp[i - si] != -1) {
						int st[51]; memset(st, 0, sizeof(st));
						int vt[51]; memset(vt, 0, sizeof(vt));
						int count = 0;
						for (size_t k = 0; k < si; k++)
						{
							st[sentence[i - si + k] - 'a']++;
							vt[validWords[j][k] - 'a']++;
							if (sentence[i - si + k] != validWords[j][k]) count++;
						}
						bool same = true;
						for (size_t k = 0; k < 51; k++)
						{
							if (st[k] != vt[k]) {
								same = false;
								break;
							}
						}
						if (same) {
							dp[i] = min(dp[i - si] + count, dp[i]);
						}
					}
				}
			}
		}

		return (dp[n] == 10000) ? -1 : dp[n];
	}
};

