#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
bool Comp(pair<char,int> &a, pair<char,int> &b){
	if(a.second==b.second){
		return a.first>b.first;
	}
	return a.second<b.second;
}
vector<pair<char, int>> L;
map<char, int> Direc;
string Lexic, endL="";
int sizeL, q=0;
signed main()
{
	cin>>sizeL>>Lexic;
	for(int i=0;i<sizeL;i++){
		if(Direc.count(Lexic[i])!=1){
			Direc[Lexic[i]]=q;
			L.push_back({Lexic[i],0});
			q++;
		}
		L[Direc[Lexic[i]]].second+=1;
	}

	sort(L.begin(), L.end(), Comp);

	for(pair<char,int> &a: L){
		while(a.second!=0){
			endL+=a.first;
			a.second-=1;
		}
	}
	
	reverse(endL.begin(), endL.end());
	cout<<endL;
	return 0;
}

