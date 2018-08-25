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
class AvoidingProduct
{
public:
	AvoidingProduct();
	~AvoidingProduct();
	vector<int> getTriple(vector<int> a, int n) {

		int t[1002];
		memset(t, 0, sizeof(t));
		for (size_t i = 0; i < a.size(); i++)
		{
			t[a[i]] = 1;
		}

		int mi = 1e10;
		vector<int> res(3);
		for (int i = 1; i <= 1001; i++)
		{
			if (t[i]) continue;
			
			for (int j = i; j <= 1001; j++)
			{
				if (t[j]) continue;

				for (int k = j; k <= 1001; k++)
				{

					if (t[k]) continue;
					int v = abs(n - i * j * k);
					if (v < mi) {
						mi = v;
						res[0] = i, res[1] = j, res[2] = k;
					}
					if (n < i * j * k) break;
				}
			}
		}
		return res;

	}
};

