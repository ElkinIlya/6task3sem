#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define sqr(x) (x) * (x)

vector<pair<int, int>> f1(int n, vector<pair<int, int>> a) { // 1 задание
	sort(a.begin(), a.end(), [](pair<int, int>& left, pair<int, int>& right) {
		return (sqr(left.first) + sqr(left.second)) < (sqr(right.first) + sqr(right.second)); // это для сравнения
		});
	for (int i = 0; i < n; ++i)
		cout << a[i].first << " " << a[i].second << endl;
	return a;
}

vector<string> f2(int n, vector<int> a) { // 2 задание
	int i = 0;
	set<int> q;
	vector<string> ans;
	while (i < n) {
		if (q.count(a[i]) != 0) {
			cout << "YES" << endl;
			ans.push_back("YES");
		}
		else {
			cout << "NO" << endl;
			ans.push_back("NO");
		}
		q.insert(a[i]);
		i++;
	}
	return ans;
}

string f3(int n, vector<pair<string, string>> a, string query) { // 3 задание
	map<string, string> q;
	for (int i = 0; i < n; ++i) {
		q[a[i].first] = a[i].second;
		q[a[i].second] = a[i].first;
	}
	cout << q[query] << endl;
	return q[query];
}