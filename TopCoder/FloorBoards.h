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
class FloorBoards
{
public:
	FloorBoards();
	~FloorBoards();
	int layout(vector<string> room) {
		int len = room[0].size();
		int plen = 1 << len;
		const int m = 2000;
		const int MAX = 9999999;
		int dp[m];
		int nextdp[m];
		
		for (int i = 0; i < plen; i++) dp[i] = MAX;
		dp[0] = 0;
		for (size_t i = 0; i < room.size(); i++)
		{
			for (size_t j = 0; j < room[0].size(); j++)
			{
				for (int k = 0; k < plen; k++) nextdp[k] = MAX;
				for (int k = 0; k < plen; k++)
				{
					if (dp[k] == MAX) continue;
					int hol = (k << 1) & (plen - 1);
					int val = hol + 1;
					if (room[i][j] == '#') {

						nextdp[hol] = min(nextdp[hol], dp[k]);
						//nextdp[val] = min(nextdp[val], dp[k]);
						continue;
					}

					if (i > 0 && room[i - 1][j] != '#' 
						&& ((k >> (len - 1)) % 2 == 1)) {
						nextdp[val] = min(nextdp[val], dp[k]);
					}
					else {
						nextdp[val] = min(nextdp[val], dp[k] + 1);
					}

					if (j > 0 && room[i][j - 1] != '#'
						&& (k % 2 == 0)) {
						nextdp[hol] = min(nextdp[hol], dp[k]);
					}
					else {
						nextdp[hol] = min(nextdp[hol], dp[k] + 1);
					}

				}
				for (int k = 0; k < plen; k++) dp[k] = nextdp[k];
			} 
		}
		int res = MAX;
		for (int k = 0; k < plen; k++) res = min(dp[k], res);
		return res;
		//int dp[11][11][2];
		//memset(dp, 0, sizeof(dp));
		//int row = room.size();
		//int col = room[0].size();
		//if (room[0][0] == '.') {
		//	dp[0][0][0] = 1;
		//	dp[0][0][1] = 1;
		//}

		//for (size_t i = 0; i < row; i++)
		//{
		//	for (size_t j = 0; j < col; j++)
		//	{
		//		if (i == 0 && j == 0) continue;
		//		for (size_t k = 0; k < 2; k++)
		//		{

		//		}
		//	}
		//}
	}
};

