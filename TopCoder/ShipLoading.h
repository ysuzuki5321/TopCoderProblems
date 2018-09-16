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
class ShipLoading
{
public:
	ShipLoading();
	~ShipLoading();
	int minimumTime(vector<int> cranes, vector<string> boxes) {
		int turn = 0;

		vector<int> boxeswaight;
		string s = "";

		for (size_t i = 0; i < boxes.size(); i++)
		{
			s += boxes[i];
		}
		stringstream ss(s);
		int a;
		int count = 0;
		while (ss >> a)
		{
			boxeswaight.push_back(a);
			count++;
		}
		sort(boxeswaight.begin(), boxeswaight.end(), greater<int>());
		sort(cranes.begin(), cranes.end(), greater<int>());
		int t[100000];
		for (size_t i = 0; i < count; i++)
		{
			t[i] = boxeswaight[i];
		}
		int cs[51];
		for (size_t i = 0; i < cranes.size(); i++)
		{
			cs[i] = cranes[i];
		}
		int css = cranes.size();
		int done = 0;
		int use[10000];
		memset(use, 0, sizeof(use));
		while (done < count)
		{
			int bef = done;
			for (size_t i = 0; i < css; i++)
			{
				for (size_t j = 0; j < count; j++)
				{
					if (use[j]) continue;
					if (t[j] <= cs[i]) {
						done++;
						use[j] = 1;
						break;
					}
				}
			}
			if (done == bef) return -1;
			turn++;
		}

		return turn;
	}
};

