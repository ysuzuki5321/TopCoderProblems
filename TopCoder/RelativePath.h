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
class RelativePath
{
public:
	RelativePath();
	~RelativePath();
	string makeRelative(string path, string currentDir) {
		vector<string> toDir;
		string file = "";
		for (size_t i = 1; i < path.size(); i++)
		{
			if('/' == path[i]){
				toDir.push_back(file);
				file = "";
			}
			else {
				file += path[i];
			}
		}
		vector<string> curDir;
		string dir = "";
		for (size_t i = 1; i < currentDir.size(); i++)
		{
			if ('/' == currentDir[i]) {
				curDir.push_back(dir);
				dir = "";
			}
			else {
				dir += currentDir[i];
			}
		}
		curDir.push_back(dir);
		int count = 0;
		vector<string> resv;
		for (size_t i = 0; i < max(toDir.size(),curDir.size()); i++)
		{
			if (i >= curDir.size()) {
				resv.push_back(toDir[i]);
			}
			else if (i >= toDir.size()) {
				count++;
			}
			else if (curDir[i] != toDir[i]) {
				count++;
				resv.push_back(toDir[i]);
			}
		}
		for (size_t i = 0; i < count; i++)
		{
			resv.insert(resv.begin(),"..");
		}
		resv.push_back(file);
		string res = "";
		for (size_t i = 0; i < resv.size(); i++)
		{
			if (i > 0) {
				res += "/";
			}
			res += resv[i];
		}
		return res;
	}
};

