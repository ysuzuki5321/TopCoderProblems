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
class RevealTriangle
{
public:
	RevealTriangle();
	~RevealTriangle();
	char calc(char t, char f) {
		return ((t - f + 10) % 10) + '0';
	}
	vector<string> calcTriangle(vector<string> questionMarkTriangle) {

		int r = questionMarkTriangle.size();
		for (int i = r- 1; i > 0; i--)
		{
			string &above = questionMarkTriangle[i - 1];
			int j = 0;
			bool count = 0;
			for (size_t j = 0; j < above.size(); j++)
			{
				if (above[j] != '?') {
					for (int k = j; k > 0; k--)
					{
						above[k - 1] = calc(questionMarkTriangle[i][k - 1], above[k]);
					}
					for (int k = j; k < above.size() - 1; k++)
					{
						above[k + 1] = calc(questionMarkTriangle[i][k ], above[k]);
					}
					break;
				}
			}
		}
		return questionMarkTriangle;
	}
};

