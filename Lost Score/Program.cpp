#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<int> L= {3, 5, 6};
signed main()
{
	int a,b,c;
	cin>>c;
	for(int l=0;l<c;l++){
		cin>>a>>b;
		for(int x: L){
			if(x!=a&&x!=b){
				cout<<x<<"\n";
			}
		}
	}
	return 0;
}

