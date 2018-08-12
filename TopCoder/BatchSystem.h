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

class BatchSystem
{
public:
	BatchSystem();
	~BatchSystem();
	vector<int> schedule(vector<int> duration, vector<string> user) {
		vector<i64> usum(duration.size(),0);
		map<string, int> keyIndex;
		for (size_t i = 0; i < duration.size(); i++)
		{
			if (keyIndex.count(user[i])) {
				usum[keyIndex[user[i]]] += duration[i];
			}
			else {
				usum[i] = duration[i];
				keyIndex[user[i]] = i;
			}
		}
		vector<i64> sortSum(usum);
		sort(sortSum.begin(), sortSum.end());
		bool use[51];
		memset(use, false, sizeof(use));
		vector<int> res;
		for (size_t i = 0; i < sortSum.size(); i++)
		{
			if (sortSum[i] == 0) continue;
			i64 sum = sortSum[i];
			string key;
			for (size_t j = 0; j < usum.size(); j++)
			{
				if (!use[j] && usum[j] == sum) {
					key = user[j];
					use[j] = true;
					break;
				}
			}
			for (size_t j = 0; j < user.size(); j++)
			{
				if (key == user[j]) {
					res.push_back(j);
				}
			}

		}
		return res;
	}
};

