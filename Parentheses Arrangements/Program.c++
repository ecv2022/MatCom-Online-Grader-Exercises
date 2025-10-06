#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> DP(1005,0);
int a,b;
int F(int q){
	int d=0;
	if(DP[q]!=0){
		return (DP[q]%1000000007);
	}

	if(q==0){
		return 1;
	}
	for(int i=0;i<q;i++){
		d+=(F(i)*F(q-i-1))%1000000007;
	}
	DP[q]=d%1000000007;
	return (d%1000000007);
}
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		cout<<F(b)<<"\n";
	}
	return 0;
}

