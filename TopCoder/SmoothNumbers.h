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
class SmoothNumbers
{
public:
	SmoothNumbers();
	~SmoothNumbers();
	int countSmoothNumbers(int N, int k) {
		vector<int> prims;
		if (N == 1) return 1;
		if (N == 0) return 0;
		for (size_t i = 2; i <= k; i++)
		{
			bool isPrime = true;
			for (size_t j = 2; j < i; j++)
			{
				if (i % j == 0) {
					isPrime = false;
					break;
				}

			}
			if (isPrime) prims.push_back(i);
		}

		for (size_t i = 0; i <= N; i++)
		{

		}
	}
};

