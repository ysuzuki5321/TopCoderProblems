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
class CountExpressions
{
public:
	CountExpressions();
	~CountExpressions();
	int swi(int i,int t1, int t2) {
		switch (i)
		{
		case 0:
			return t1 + t2;
		case 1:
			return t1 - t2;
		case 2:
			return t1 * t2;
		default:
			break;
		}
		return 0;
	}
	int calc(int t1, int t2, int t3, int t4,int val) {
		int count = 0;
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0;  j < 3;  j++)
			{
				for (size_t k = 0; k < 3; k++)
				{
					int cal = swi(k,swi(j,swi(i,t1,t2),t3),t4);
					count += cal == val;
				}
			}
		}
		return count;
	}
	int calcExpressions(int x, int y, int val) {

		int count = 0;
		int t[2] = { x,y };
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 2; j++)
			{
				for (size_t k = 0; k < 2; k++)
				{
					for (size_t m = 0; m < 2; m++)
					{
						if ((i ^ j && k ^ m)
							|| (i ^ k && j ^ m )
							|| (i ^ m && j ^ k )) {
							count += calc(t[i], t[j], t[k], t[m], val);

						}
					}
				}
			}
		}

		return count;
	}
};

