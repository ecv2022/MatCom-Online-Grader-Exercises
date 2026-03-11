#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a, Suma=0;
string d,b;
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>d>>b;
		for(int r=0;r<d.size();r++){
			if(d[r]!=b[r]) Suma++;
		}
		cout<<Suma<<"\n";
		Suma=0;
	}
	return 0;
}

