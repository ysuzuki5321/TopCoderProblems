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
class TwoStringMasks
{
public:
	TwoStringMasks();
	~TwoStringMasks();
	string shortestCommon(string s1, string s2) {

		string s1l;
		string s2l;
		string s1r;
		string s2r;
		bool apparedAster = false;
		for (size_t i = 0; i < s1.size(); i++)
		{
			if (s1[i] == '*') apparedAster = true;
			else if (apparedAster) {
				s1r += s1[i];
			}
			else {
				s1l += s1[i];
			}
		}
		apparedAster = false;
		for (size_t i = 0; i < s2.size(); i++)
		{
			if (s2[i] == '*') apparedAster = true;
			else if (apparedAster) {
				s2r += s2[i];
			}
			else {
				s2l += s2[i];
			}
		}

		string res = "";
		int sub = abs((int)s1.size() - (int)s2.size());
		if (s1.size() < s2.size()) {
			s1l += string(sub, '*');
		}
		else {
			s2l += string(sub, '*');
		}

		for (size_t i = 0; i < 50; i++)
		{
			string s1n = s1l + string(i, '*') + s1r;
			string s2n = s2l + string(i, '*') + s2r;
			bool check = true;
			for (size_t j = 0; j < s1n.size(); j++)
			{
				if (s1n[j] == '*' && s2n[j] != '*') {
					s1n[j] = s2n[j];
				}
				else if (s1n[j] != '*' && s2n[j] == '*') {
					s2n[j] = s1n[j];
				}
				else if (s1n[j] != s2n[j]) {
					check = false;
					break;
				}
			}
			if (check) {
				return s1n;
			}
		}

		return "impossible";
	}
};

