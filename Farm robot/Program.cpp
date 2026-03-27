#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int post,command,destr;
int z, pos=1;
vector<int> Places;
signed main()
{
	cin>>post>>command>>destr;
	Places.resize(post+1,0);
	Places[1]+=1;
	for(int i=0;i<command;i++){
		cin>>z;
		if(pos+z==0){
			pos=post;
		}
		else if((pos+z)%(post+1)==0){
			pos=1;
		}
		else{
			pos+=z;
		}
		Places[pos]+=1;
	}
	cout<<Places[destr];
	return 0;
}

