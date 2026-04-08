#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<int> Criba;
int a,b,c;
void CribaEra(){
	for(int i=2;i<100000;i++){
		if(Criba[i]==0){
			for(int x=i;x<100000;x+=i){
				Criba[x]=i;
			}
		}
	}
}
int CalcularMaximoPrimo(int NumeroFinal, int MaximoPrimo){
	int resultado=0;
	for(int i=2;i<=NumeroFinal;i++){
		if(Criba[i]<=MaximoPrimo) resultado++;
	}
	return resultado;
}
signed main()
{
	cin>>a;
	Criba.resize(100000,0);
	CribaEra();
	for(int i=0;i<a;i++){
		cin>>b>>c;
		cout<<CalcularMaximoPrimo(b,c)<<"\n";
	}
	return 0;
}
