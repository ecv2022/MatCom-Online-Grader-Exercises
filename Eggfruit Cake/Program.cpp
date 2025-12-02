#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<int> R;
string q, t;
int r, Total=0, Z;
int Lasty=-1;
signed main()
{
	cin>>q>>r;
	Z=q.size();
	t=q+q+q;
	q+=q;
	R.resize(t.size());
	
	for(int i=t.size()-1;i>=0;i--){
		if(t[i]=='E'){
			Lasty=i;
		}
		R[i]=Lasty;
	}

	for(int i=0;i<Z;i++){
		if(q[i]=='E'){
			Total+=r;
		}
		else{
			if((R[i]-i)<r&&R[i]!=-1){
				Total+=r-(R[i]-i);
			}
		}
	}
	cout<<Total;

	return 0;
}

