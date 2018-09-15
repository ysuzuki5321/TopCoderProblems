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
class Embassy
{
public:
	Embassy();
	~Embassy();
	int _forms[51];
	int _openTime;
	int _dayLength;
	int _first;
	int t[51];
	int siz;
	int calc(int s) {
		int now = s;
		int sum = _first;
		for (size_t i = 1; i < siz; i++)
		{
			now += _forms[i];
			sum += _forms[i];

			if (now % _dayLength > _openTime) {
				sum += _dayLength - (now % _dayLength);
				now += _dayLength - (now % _dayLength);

			}
			//if (t[i] < sum) return 1000000000;
			//t[i] = sum;
		}
		return sum;
	}
	int visaApplication(vector<int> forms, int dayLength, int openTime) {
		_openTime = openTime;
		_dayLength = dayLength;
		int res = 1000000000;
		siz = forms.size();
		for (size_t i = 0; i < forms.size(); i++)
		{
			_forms[i] = forms[i];

		}
		int first = forms[0];
		int high = openTime;
		int row = 0;
		_first = first;
		int mid;
		for (size_t i = 0; i < 51; i++)
		{
			t[i] = 1000000000;
		}
		for (size_t i = 0; i <= openTime; i++)
		{

			res = min(res,calc(i));

		}
		return res;
	}
};

