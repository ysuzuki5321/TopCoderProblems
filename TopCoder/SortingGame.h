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
class SortingGame
{
public:
	SortingGame();
	~SortingGame();
	bool check(string v) {
		for (size_t i = 0; i < v.size(); i++)
		{
			if (v[i] != ((i + 1) + '0')) {
				return false;
			}
		}
		return true;
	}
	string so(string v,int i,int _k) {

		//sort(v.begin() + i, v.begin() + i + _k);
		for (size_t j = 0; j < _k / 2; j++)
		{
			swap(v[j + i], v[i + _k - (j + 1)]);
			//int f = t[j + i];
			//int to = t[i + _k - (j + 1)];
			//t[j + i] = to;
			//t[i + _k - j] = f;
		}
		return v;
	}
	//int rec(int deep) {
	//	
	//	if (check()) {
	//		
	//		return deep;
	//	}

	//	int v = 0;
	//	for (size_t i = 0; i < s; i++)
	//	{
	//		v += t[s - i - 1] * pow(10, i);
	//	}
	//	if (m.count(v)) {
	//		m[v] = min(deep, m[v]);
	//		return INT_MAX;
	//	}
	//	m[v] = deep;
	//	int res = INT_MAX;
	//	for (int j = 0; j <= s - _k; j++)
	//	{
	//		so(j);
	//		res = min(rec(deep + 1), res);
	//		
	//		so(j);
	//	}
	//	return res;
	//}
	//

	int fewestMoves(vector<int> board, int k) {
		//_k = k;
		//s = board.size();
		//for (size_t i = 0; i < s; i++)
		//{
		//	t[i] = board[i];
		//}
		//int res = rec(0);
		queue<string> q;
		//priority_queue<string, vector<string>, greater<string>> q;
		int s = board.size();
		string f = "";
		for (size_t i = 0; i < s; i++)
		{
			f += board[i] + '0';
		}
		string ans = f;
		sort(ans.begin(), ans.end());
		q.push(f);
		unordered_map<string, int> m;
		m[f] = 0;
		while (!q.empty())
		{
			string v = q.front(); q.pop();
			if (v == ans) {
				return m[v];
			}
			//cout << v << "\n";
			for (size_t i = 0; i <= s - k; i++)
			{
				string sorted = so(v, i,k);
				if (m[sorted] != 0) {
					continue;
				}

				q.push(sorted);
				m[sorted] = m[v] + 1;
			}
		}
		return -1;
	}
};

