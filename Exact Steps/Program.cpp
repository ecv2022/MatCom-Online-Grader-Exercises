#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007

string Z(int start, int finish, int b, int z){
	int half=(start+finish)/2;
	//cout<<start<<"|"<<finish<<"|"<<b<<"|"<<z<<"|half:"<<half<<"|\n";
	if(start>finish){
		return "";
	}
	if(z==b){
		return (to_string(half)+" ");
	}
	return (Z(start, half-1, b, z+1) + Z(half+1,finish,b,z+1));
}
signed main()
{
	int a,b,c;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		cout<<Z(0,b-1,c,1)<<"\n";
	}
	return 0;
}

