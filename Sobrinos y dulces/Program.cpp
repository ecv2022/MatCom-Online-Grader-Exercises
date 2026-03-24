#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b, incrementer, steps=0,pos=0, eliminator=0;
vector<int> R;
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		R.push_back(b);
	}

	sort(R.begin(), R.end());

	while(R.size()!=0){
		if(R[R.size()-1]-eliminator<=0){
			break;
		}

		if(R[R.size()-1]-eliminator>(R.size()-pos)){
			R.pop_back();
		}
		else{
			eliminator+=1;
		}

		for(int i=pos;i<R.size();i++){
			if(R[i]-eliminator>0){
				pos=i;
				break;
			}
		}

		steps+=1;
	}

	cout<<steps;

	return 0;
}

