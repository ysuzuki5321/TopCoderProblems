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
using namespace std;
class StockHistory
{
public:
	StockHistory();
	~StockHistory();
	int maximumEarnings(int initialInvestment, int monthlyContribution,vector<string> stockPrices) {

		int t[100][100];
		int row = stockPrices.size();
		int col = 0;
		for (size_t i = 0; i < row; i++)
		{
			stringstream ss(stockPrices[i]);
			int j = 0;
			while (ss >> t[i][j++]) col = j;
		}

		int keepi = 0;
		double keepb = 0;
		double res = 0;
		for (int i = row - 2; i >= 0; i--)
		{
			double mv = 0;

			for (size_t j = 0; j < col; j++)
			{
				if (t[row - 1][j] > t[i][j]) {
					if (mv < (double)t[row - 1][j] / (double)t[i][j]) {
						mv = (double)t[row - 1][j] / (double)t[i][j];
					}
				}
			}

			if (mv > keepb) {

				if(keepi > 0) res += ((double)((keepi - i) * monthlyContribution) * (keepb - 1.0));
				keepi = i;
				keepb = mv;
			}

		}
		res += (double)(keepi * monthlyContribution) * (keepb  - 1.0);
		res += max(0.0,(keepb - 1.0)) * initialInvestment;
		return res + 0.5;
	}
};

