#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long

int a,b;
int E1,E2;
int total=0;
vector<vector<int>> Z;

signed main()
{
	cin>>a>>b;

	Z.resize(a+2);

	REP_INDEX_0(b){
		cin>>E1>>E2;
		Z[E1].push_back(E2);
		Z[E2].push_back(E1);
	}

	REP_INDEX_1((a+1)){
		if(Z[i].size()>=2){
			total+=1;
		}
	}

	cout<<total;

	return 0;
}

