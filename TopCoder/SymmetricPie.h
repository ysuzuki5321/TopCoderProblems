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
class SymmetricPie
{
public:
	SymmetricPie();
	~SymmetricPie();
	int d[8];
	int sorted[8];
	bool use[8];
	int size;
	int count() {

		int v = 0;
		int bef = 1;
		int res = 0;

		for (size_t i = 1; i < size; i++)
		{
			while(v >= 50) {
				v -= sorted[bef++];
			}
			v += sorted[i];
			if (v == 50) res++;
		}
		return res;
	}
	int rec(int c) {

		if (c == 0) {
			return count();
		}
		int res = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (!use[i]) {
				use[i] = true;
				sorted[c] = d[i];
				res = max(res, rec(c - 1));
				use[i] = false;
			}
		}
		return res;
	}
	int getLines(vector<int> dogs) {
		
		size = dogs.size();
		for (size_t i = 0; i < size; i++)
		{
			d[i] = dogs[i];
			use[i] = false;
		}
		return rec(size);
	}
};

