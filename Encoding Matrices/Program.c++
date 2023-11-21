#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a, Ones=0;
vector<string> Z;
int count(string r){
	int REsult=0;
	for(char a: r){
		if(a=='1'){
			REsult+=1;
		}
	}
	return REsult;
}
void convert(char d, char e){
	for(int x=0;x<a;x++){
		for(int y=0;y<a;y++){
			if(Z[x][y]=='1'){
				Z[x][y]=d;
			}
			else{
				Z[x][y]=e;
			}
		}
	}
}
signed main()
{
	cin>>a;
	Z.resize(a);
	for(int i=0;i<a;i++){
		cin>>Z[i];
		Ones+=count(Z[i]);
	}

	if((Ones*2)>(a*a)){
		convert('*', 'o');
	}
	else if((Ones*2)<(a*a)){
		convert('o', '*');
	}
	else{
		if(Z[0][0]=='1')convert('*', 'o');
		else convert('o', '*');
	}
	
	for(int x=0;x<a;x++){
		cout<<Z[x]<<"\n";
	}
	return 0;
}

