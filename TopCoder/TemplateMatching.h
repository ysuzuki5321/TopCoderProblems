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
class TemplateMatching
{
public:
	TemplateMatching();
	~TemplateMatching();
	string bestMatch(string text, string prefix, string suffix) {
		int mp = 0;
		int mpre = 0;
		//for (size_t i = 0; i < text.size(); i++)
		//{
		//	text[i] = (text[i] == ' ') ? 'z' + 1 : text[i];
		//}
		//for (size_t i = 0; i < prefix.size(); i++)
		//{
		//	prefix[i] = (prefix[i] == ' ') ? 'z' + 1 : prefix[i];

		//}
		//for (size_t i = 0; i < suffix.size(); i++)
		//{
		//	suffix[i] = (suffix[i] == ' ') ? 'z' + 1 : suffix[i];

		//}

		string res = text.substr(0,1);
		for (size_t i = 1; i < text.size(); i++)
		{
			if (res[0] > text[i]) {
				res = text.substr(i, 1);
			}

		}
		for (size_t i = 0; i < prefix.size(); i++)
		{
			string v = prefix.substr(prefix.size() - i - 1, i + 1);
			int pos = 0;
			string tt = text;
			
			while (pos >= 0)
			{
				pos = tt.find(v);
				if (pos < 0)break;
				string sub = tt.substr(pos);
				int po = v.size();
				if (mp < po) {
					mp = po;
					res = v;
					mpre = po;
				}
				else if (mp == po && mpre < po){
					res = v;
				}else if(mp == po){
					res = (v < res) ? v : res;

				}
				for (size_t j = 0; j < suffix.size(); j++)
				{
					string vv = suffix.substr(0, j + 1);
					int p2 = 0;
					p2 = sub.find(vv,max(0,(int)v.size() - (int)vv.size()));
					if (p2 < 0)continue;
					string val = sub.substr(0, p2 + vv.size());
					int point = v.size() + vv.size();
					if (mp < point) {
						mp = point;
						mpre = po;
						res = val;
					}
					else if (mp == point && mpre < po) {
						res = val;
					}else if(mp == point){
						res = (val < res) ? val : res;
					}
				}
				tt = tt.substr(pos + 1);
			}
		}

		for (size_t i = 0; i < suffix.size(); i++)
		{
			string vv = suffix.substr(0, i + 1);
			int p2 = 0;
			string tt = text;
			while (true) {
				p2 = tt.find(vv);
				if (p2 < 0)break;;

				string val = tt.substr(0, p2 + vv.size());
				int point = vv.size();
				for (size_t j = 0; j < val.size() - vv.size() + 1; j++)
				{
					string sub = val.substr(j);
					if (mp < point) {
						mp = point;
						res = sub;
					}
					else if (mp == point && mpre == 0) {
						res = (sub < res) ? sub : res;
					}
				}
				tt = tt.substr(p2 + 1);
			}
		}

		for (size_t i = 0; i < res.size(); i++)
		{
			res[i] = (res[i] == 'z' + 1) ? ' ' : res[i];
		}
		return res;
	}
};

