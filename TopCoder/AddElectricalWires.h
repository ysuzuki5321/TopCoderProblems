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
class AddElectricalWires
{
public:
	AddElectricalWires();
	~AddElectricalWires();
	int ct[51];
	int v[51];
	bool use[51];
	vector<string> w;
	vector<int> x;
	void rec(int f) {

		bool chain = false;
		for (size_t i = 0; i < w[f].size(); i++)
		{
			if (w[f][i] == '1' && !use[i] && v[i] == 0) {
				chain = true;
				use[i] = true;
				rec(i);
				x.push_back(i);
				v[i]++;
				
				use[i] = false;
			}
		}
	}
	int maxNewWires(vector<string> wires, vector<int> gridConnections) {
		w = wires;
		memset(v, 0, sizeof(v));
		memset(use, 0, sizeof(use));
		vector<int> cv;
		memset(ct, 0, sizeof(ct));
		int rem = wires.size();
		vector<vector<int>> cvv;
		for (size_t i = 0; i < gridConnections.size(); i++)
		{
			x.clear();
			x.push_back(gridConnections[i]);
			use[gridConnections[i]] = true;
			rec(gridConnections[i]);

			v[gridConnections[i]]++;
			use[gridConnections[i]] = false;
			cvv.push_back(x);
			int count = 0;
			for (size_t j = 0; j < wires.size(); j++)
			{
				if (v[j]) count++;
			}
			cv.push_back(count);
			rem -= count;
			memset(v, 0, sizeof(v));
		}
		int res = 0;
		int re[51];
		memset(re, 0, sizeof(re));
		for (size_t i = 0; i < cvv.size(); i++)
		{
			int ad = 0;

			for (size_t j = 0; j < cvv[i].size(); j++)
			{
				for (size_t k = j + 1; k < cvv[i].size(); k++)
				{
					if (wires[cvv[i][j]][cvv[i][k]] == '0') ad++;
				}
				re[cvv[i][j]] = 1;
			}

			res += ad;
		}
		vector<int> rei;
		for (size_t i = 0; i < wires.size(); i++)
		{
			if (re[i] == 0) rei.push_back(i);
		}

		for (size_t i = 0; i < rei.size(); i++)
		{
			for (size_t j = i + 1; j < rei.size(); j++)
			{
				if (wires[rei[i]][rei[j]] == '0') res++;
			}
		}

		int r = 0;
		for (size_t i = 0; i < cv.size(); i++)
		{

			int calcr = cv[i] * rem;

			r = max(res  + calcr, r);
		}

		return r;
	}
	int calc(int val) {
		if (ct[val] != 0) return ct[val];
		if (val == 0) return 0;
		else {
			return ct[val] = val + calc(val - 1);
		}
	}
};

