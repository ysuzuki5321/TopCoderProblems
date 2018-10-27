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
class Undo
{
public:
	Undo();
	~Undo();
	string getText(vector<string> commands, vector<int> time) {

		//char c[51];
		//int i = 0;
		//int target[51];
		//int ti = 0;
		//bool use[51];

		//memset(target, 0, sizeof(target));

		//for (int i = 0; i < commands.size(); i++)
		//{
		//	stringstream ss(commands[i]);
		//	string ty;
		//	int t;
		//	ss >> ty;
		//	if (ty == "undo") {
		//		ss >> target[ti++];

		//	}
		//	else {
		//		use[i] = true;
		//		ss >> c[i++];
		//	}
		//}
		string s = "";
		vector<pair<int,int>> unt;
		int count[51];
		memset(count,0,sizeof(count));
		vector<string> memo;
		memo.push_back("");
		for (int i = 0; i < time.size(); i++)
			//for (int i = time.size() - 1; i >= 0; i--)
		{
			stringstream ss(commands[i]);
			string ty;
			ss >> ty;
			if (ty == "undo") {
				int v;
				ss >> v;	
				int j = i;
				for (; j >= 0; j--)
				{
					if ((time[i] - v) > time[j]) break;
				}
				j++;
				memo.push_back(memo[max(0, (int)memo.size() - 1 - (i - j))]);

			}
			else {
				char c;
				ss >> c;
				memo.push_back(memo[memo.size() - 1] + c);

			}
			//if (ty == "undo") {

			//	int v;
			//	ss >> v;
			//	int ic = 1;
			//	for (size_t j = 0; j < unt.size(); j++)
			//	{
			//		pair<int, int> pii = unt[j];
			//		if (pii.first >= pii.second - time[i]) {
			//			ic += count[j];
			//		}
			//	}
			//	count[unt.size()] = ic;
			//	unt.push_back(pair<int,int> (v,time[i]));
			//}
			//else {

			//	char c;
			//	int ct = 0;
			//	ss >> c;
			//	int now = time[i];

			//	for (int j = 0; j < unt.size(); j++)
			//	{
			//		if (unt[j].first >= unt[j].second - now) {
			//			ct += count[j];
			//		}
			//	}
			//	if (ct % 2 == 0) s =  c + s;
			//}
		}
		return memo.back();
	}
};

