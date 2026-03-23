#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
string a,b;
vector<vector<int>> Tree;
int first, second;
int node ,length, x,z;
int R(int actnode, int car, int prev){
	int total=0;
	if(car==length-1){
		return 1;
	}
	for(int Child: Tree[actnode]){
		if(a[Child]==b[car+1]&&Child!=prev){
			total+=R(Child, car+1, actnode);
		}
	}
	return total;
}
signed main()
{
	cin>>node>>length>>a>>b;
	Tree.resize(node);
	for(int i=0;i<node-1;i++){
		cin>>first>>second;
		Tree[first].push_back(second);
		Tree[second].push_back(first);
	}
	int total=0;
	for(int i=0;i<node;i++){
		if(a[i]==b[0]){
			total+=R(i,0,i);
		}
	}
	cout<<total;
	return 0;
}

