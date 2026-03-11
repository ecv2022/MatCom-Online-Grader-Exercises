#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a;
string r;
vector<pair<int, string>> d;
bool Comp(pair<int,string> &a, pair<int,string> &b){
	int ar=0,br=0;
	for(int i=0;i<a.second.size();i++){
		ar+=(int)a.second[i];
	}
	for(int i=0;i<b.second.size();i++){
		br+=(int)b.second[i];
	}

	if(ar==br){
		return a.first<b.first;
	}
	return ar<br;
}
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>r;
		d.push_back({i,r});
	}
	sort(d.begin(), d.end(), Comp);
	for(pair<int,string> q : d){
		cout<<q.second<<"\n";
	}
	return 0;
}

