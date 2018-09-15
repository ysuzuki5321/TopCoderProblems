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
		for (size_t i = 0; i < boxes.size(); i++)
		{
			stringstream ss(boxes[i]);
			int a;
			while (ss >> a)
			{
				boxeswaight.push_back(a);
			}
		}
		sort(boxeswaight.begin(), boxeswaight.end(), greater<int>());
		sort(cranes.begin(), cranes.end(), greater<int>());
		while (boxeswaight.size() > 0)
		{
			int bef = boxeswaight.size();
			for (size_t i = 0; i < cranes.size(); i++)
			{
				for (size_t j = 0; j < boxeswaight.size(); j++)
				{
					if (boxeswaight[j] <= cranes[i]) {
						boxeswaight.erase(boxeswaight.begin() + j);
						break;
					}
				}
			}
			if (boxeswaight.size() == bef) return -1;
			turn++;
		}

		return turn;
	}
};

