#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<vector<int>> Matrix;
vector<int> Columns,Rows;
int a,b,d;
void R(int pos, bool column){
	int impair=0;
	if(column){
		for(int x=0;x<a;x++){
			impair+=Matrix[x][pos];
		}
		if(impair%2){
			Columns.push_back(pos);
		}
	}
	else{
		for(int x=0;x<b;x++){
			impair+=Matrix[pos][x];
		}
		if(impair%2){
			Rows.push_back(pos);
		}
	}
}
signed main()
{
	cin>>a>>b;
	Matrix.resize(a);
	for(int i=0;i<a;i++){
		for(int x=0;x<b;x++){
			cin>>d;
			Matrix[i].push_back(d);
		}
	}
	for(int i=0;i<a;i++){
		R(i, false);
	}
	for(int x=0;x<b;x++){
		R(x, true);
	}
	
	while(!Rows.empty()||!Columns.empty()){
		while(!Rows.empty()&&!Columns.empty()){
			Matrix[Rows[Rows.size()-1]][Columns[Columns.size()-1]]+=1;
			Rows.pop_back();
			Columns.pop_back();
		}

		if(Rows.empty()&&Columns.empty()) break;

		if(Columns.empty()){
			Matrix[Rows[Rows.size()-1]][0]+=1;
			Rows.pop_back();
			Columns.push_back(0);
		}
		else{
			Matrix[0][Columns[Columns.size()-1]]+=1;
			Columns.pop_back();
			Rows.push_back(0);
		}
	}

	for(int i=0;i<a;i++){
		for(int x=0;x<b;x++){
			cout<<Matrix[i][x]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

