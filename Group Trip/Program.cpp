#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int persons, taxi_cost, train_cost;

signed main()
{
	cin>>persons>>train_cost>>taxi_cost;
	cout<<min(persons*train_cost, taxi_cost);
	return 0;
}

