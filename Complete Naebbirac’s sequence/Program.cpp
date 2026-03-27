#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<int> X;
int a,b,c;
int rmax=-1, rmin=999999, maxp=-1, minp=-1;
map<int,int> RR;
signed main()
{
	cin>>a>>b;

	X.resize(a+1, 0);
	for(int i=0;i<b;i++){
		cin>>c;
		X[c]+=1;
	}

	for(int i=1;i<X.size();i++){
		if(RR.find(X[i])==RR.end()){
			RR[X[i]]=0;
		}
		RR[X[i]]+=1;
	}

	if(RR.size()>3){
		cout<<"*";
		return 0;
	}

	for(int i=1;i<X.size();i++){
		if(X[i]>rmax){
			rmax=X[i];
			maxp=i;
		}
		if(X[i]<rmin){
			rmin=X[i];
			minp=i;
		}
	}


	if(rmin+1==rmax){
		if(RR[rmin]==1){
			cout<<"+"+to_string(minp);
		}
		else if(RR[rmax]==1){
			cout<<"-"+to_string(maxp);
		}
		else{
			cout<<"*";
		}
	}
	else if(RR[rmin]==1&&RR[rmax]==1&&RR.find(rmax-1)!=RR.end()&&RR.find(rmin+1)!=RR.end()){
		cout<<"-"+to_string(maxp)<<" +"+to_string(minp);
	}
	else{
		cout<<"*";
	}
	
	return 0;
}

