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
vector<int> R;
void Recur(int Depth, string Result){
	if(Depth>a){
		cout<<Result<<"\n";
		return;
	}
	for(int i=1;i<=a;i++){
		if(R[i]==0){
			R[i]=1;
			Recur((Depth+1),((Result+" ")+to_string(i)));
			R[i]=0;
		}
	}
}
signed main()
{
	cin>>a;
	R.resize(a+1,0);
	Recur(1, "");
	return 0;
}

