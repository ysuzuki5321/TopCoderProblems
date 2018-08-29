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
class FIELDDiagrams
{
public:
	FIELDDiagrams();
	~FIELDDiagrams();
	long long memo[60][60];
	int f;
	long long calc(int fieldOrder,int deep) {

		if (~memo[fieldOrder][deep] != 0) {
			return memo[fieldOrder][deep];
		}

		if (fieldOrder == 0) {
			return 1;
		}

		i64 &res = memo[fieldOrder][deep];
		res = 0;
		int m = min(fieldOrder, f - deep);
		for (int i = m; i >= 0; i--)
		{
			res += calc(i, deep + 1);
		}
		return res;
	}
	long long countDiagrams(int fieldOrder){
		f = fieldOrder;
		memset(memo, -1, sizeof(memo));
		return  calc(fieldOrder,0)  - 1;
	}
};

