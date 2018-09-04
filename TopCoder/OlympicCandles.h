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
#include <functional>
typedef long long i64;
using namespace std;
class OlympicCandles
{
public:
	OlympicCandles();
	~OlympicCandles();
	int numberOfNights(vector<int> candles) {

		int res = 0;
		
		while (true)
		{
			int t = res + 1;
			if (t > candles.size()) return res;
			sort(candles.begin(), candles.end(),greater<int>());
			
			for (size_t i = 0; i < t; i++)
			{
				if (candles[i] == 0) return res;
				candles[i]--;
			}
			res++;
		}

		return res;
	}
};

