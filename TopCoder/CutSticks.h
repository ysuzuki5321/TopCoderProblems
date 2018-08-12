#pragma once
#include <sstream>
#include <string>
#include <vector>
#include <map>
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
typedef long long i64;
using namespace std;

class CutSticks
{
public:
	CutSticks();
	~CutSticks();
	double maxKth(vector<int> sticks, int C, int K) {

		double high = 0;
		for (size_t i = 0; i < sticks.size(); i++)
		{
			high = max(high, (double)sticks[i]);
		}
		double low = 0;
		double mid = 0;
		int n = 0;
		const i64 v = 10000000009;
		while (n++ <= 1000)
		{
			mid = (high + low) / 2;
			i64 s = 0;
			i64 cut = 0;
			for (size_t i = 0; i < sticks.size(); i++)
			{
				i64 num = ((double)sticks[i] / mid);
				num %= v;
				s += num;
				s %= v;
				cut += max(num - 1,0LL);
				cut %= v;
			}


			i64 def = s - cut;
			i64 rem = K - def;
			if ((s - max(0LL, cut - C)) >= K) {
				//if (rem <= C && s >= K) {
					low = mid;
			}
			else {
				high = mid;
			}
		}
		return mid;
	}
};

