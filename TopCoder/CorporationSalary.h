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
class CorporationSalary
{
public:
	CorporationSalary();
	~CorporationSalary();
	i64 d[51];
	bool use[51];
	int size;
	vector<string> rel;
	long long calc(int f) {

		if (~d[f]) {
			return d[f];
		}
		i64 &res = d[f];
		res = 0;
		string t = rel[f];
		for (size_t i = 0; i < t.size(); i++)
		{
			if (t[i] == 'Y' && !use[i]) {
				use[i] = true;
				res += calc(i);
				use[i] = false;
			}
		}
		if (res == 0) res = 1;
		return res;
	}
	long long totalSalary(vector<string> relations) {
		size = relations.size();
		rel = relations;
		for (size_t i = 0; i < size; i++)
		{
			d[i] = -1;
			use[i] = false;
		}
		i64 res = 0;
		for (size_t i = 0; i < size; i++)
		{
			use[i] = true;
			res += calc(i);
			use[i] = false;
		}
		return res;
	}
};

