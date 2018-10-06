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
class NextNumber
{
public:
	NextNumber();
	~NextNumber();
	int calc(vector<int> b) {

		int res = 0;
		for (size_t i = 0; i < b.size(); i++)
		{
			res += b[i] * pow(2, i);
		}
		return res;
	}
	int getNextNumber(int N) {

		vector<int> b;
		int dig = 0;
		int firstOne = -1;
		int firstZero = -1;
		int count = 0;
		int tn = N;
		while (tn > 0)
		{
			if (tn % 2 == 0) {
				b.push_back(0);
			}
			else {
				b.push_back(1);
			}
			tn /= 2;
			dig++;
		}
		b.push_back(0);
		vector<int> best;
		int res = INT_MAX;
		for (int i = dig - 1; i >= 0; i--)
		{
			if (b[i] == 1 && b[i + 1] == 0) {
				vector<int> temp(b);
				swap(temp[i], temp[i + 1]);
				int tr = calc(temp);
				if (tr < res && tr > N) {
					res = tr;
					best = temp;
				}
			}
		}

		int z = 0;
		for (size_t i = 1; i < dig; i++)
		{

			if (best[i] == 1 && best[z] == 0) {
				vector<int> tp(best);
				swap(tp[i], tp[z]);
				int tr = calc(tp);
				if (tr < res && tr > N) {
					z++;
					res = tr;
					best = tp;
				}
				else {
					break;
				}
			}
		}
		return res;
	}
};

