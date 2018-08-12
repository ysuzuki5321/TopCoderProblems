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
class InfiniteSequence2
{
public:
	InfiniteSequence2();
	~InfiniteSequence2();
	long long calc(long long n, int p, int q, int x, int y) {
		dp.clear();
		dp2.clear();
		memset(t, 0, sizeof(t));
		i64 res = recur(n, p, q, x, y);
		return res;
	}
private:
	map<long long, long long> dp;
	map<long long, long long> dp2;
	const int MAX = 1000000;
	long long t[1000000];
	long long recur(long long n, int p, int q, int x, int y) {
		if (n <= 0) return 1;
		//long long np = n / p;
		//long long nq = n / q;
		if (n < MAX) {
			if (t[n] != 0) {
				return t[n];
			}
			else {
				return t[n] = recur(n / p - x, p, q, x, y) + recur(n / q - y,p,q,x,y);
			}
		}
		return  recur(n / p - x, p, q, x, y) + recur(n / q - y, p, q, x, y);

		//if (!dp.count(np)) {
		//	dp[np] = recur(np - x, p, q, x, y);
		//}
		//if (!dp2.count(nq)) {
		//	dp2[nq] = recur(nq - y, p, q, x, y);
		//}

		//return dp[np] + dp2[nq];

	}
};

