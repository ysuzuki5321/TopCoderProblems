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
class TwoLotteryGames
{
public:
	TwoLotteryGames();
	~TwoLotteryGames();		
	int t[1000][8];
	int a[8];
	int c;
	int _n;
	int _m;
	void rec(int next,int count) {
		if (_m == count) {

			for (size_t i = 0; i < _n; i++)
			{
				t[c][i] = a[i];
			}
			c++;
			return;
		}
		if (next >= _n) return;

		a[next] = 1;
		rec(next + 1,count + 1);
		a[next] = 0;
		rec(next + 1, count);
	}
	double getHigherChanceGame(int n, int m, int k) {
		c = 0;
		_n = n;
		_m = m;
		memset(a, 0, sizeof(a));
		for (size_t i = 0; i < 1000; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				t[i][j] = 0;
			}
		}

		rec(0,0);
		int s = 0;
		int tt = 0;
		for (size_t i = 0; i < c; i++)
		{
			for (size_t j = 0; j < c; j++)
			{
				int e = 0;
				for (size_t mmm = 0; mmm < n; mmm++)
				{
					if (t[i][mmm] == 0) continue;
					if (t[i][mmm] == t[j][mmm]) {
						e++;
					}
				}
				tt++;
				if (k <= e) s++;
			}
		}
		return (double)s / (double)tt;
	}
};

