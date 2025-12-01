#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b,r=0, zzzz=0;
vector<int> Criba;

void Crib(int qqq){
	qqq+=1;
	Criba.resize(qqq,0);
	Criba[1]=1;
	for(int i=2;i<qqq;i++){
		if(Criba[i]==0){
			for(int x=i;x<qqq;x+=i){
				Criba[x]=i;
			}
		}
	}
}
int Desc(int z){
	int valor=0;
	if(z==1) valor+=1;
	while(z!=1){
		valor+=Criba[z];
		z/=Criba[z];
	}
	return valor;
}
signed main()
{
	cin>>a>>b;
	Crib(a);
	int contador=0;
	for(int i=1;i<=a;i++){
		if(Desc(i)<=b) contador+=1;
	}
	cout<<contador;
	return 0;
}

