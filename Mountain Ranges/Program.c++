#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b,c, TotalMaximo=1, TotalActual=1;
vector<int> Z;
signed main()
{
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c;
		Z.push_back(c);
	}
	sort(Z.begin(), Z.end());
	c=Z[0];
	for(int i=1;i<a;i++){
		if(Z[i]-c<=b){
			TotalActual++;
			TotalMaximo=max(TotalMaximo,TotalActual);
		}
		else{
			TotalActual=1;
		}
		c=Z[i];
	}
	cout<<TotalMaximo;
	return 0;
}

