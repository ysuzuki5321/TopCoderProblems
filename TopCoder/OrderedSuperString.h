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
class OrderedSuperString
{
public:
	OrderedSuperString();
	~OrderedSuperString();
	int getLength(vector<string> words) {
		string word = words[0];
		int start = 0;
		for (size_t i = 1; i < words.size(); i++)
		{
			int pos = word.substr(start).find(words[i]);
			if (pos >= 0) {
				start = start + pos;
				continue;
			}
			int sl = 100;
			for (size_t j = 0; j < min(word.size() - start,words[i].size()); j++)
			{
				bool same = true;
				int cs = word.size() - 1 - j;
				for (size_t k = cs; k < word.size(); k++)
				{
					if (word[k] != words[i][k - cs]) {
						same = false;
						break;
					}
				}
				if (same) {
					sl = j + 1;
				}
			}
			if (sl == 100) {
				start = word.size();
				word += words[i];
			}
			else {
				start = word.size() - sl;
				for (size_t j = sl; j < words[i].size(); j++)
				{
					word += words[i][j];
				}
			}
		}

		return word.size();
	}
};

