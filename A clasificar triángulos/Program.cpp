#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int TestCases, a,b,c;
signed main()
{
	cin>>TestCases;
	for(int i=0;i<TestCases;i++){
		cin>>a>>b>>c;
		int maximo_lado =max(max(a,b),c);

		if(a+b+c-maximo_lado<=maximo_lado){
			cout<<"Case #"<<(i+1)<<": invalid!\n";
		}
		else if(a==b&&b==c){
			cout<<"Case #"<<(i+1)<<": equilateral\n";
		}
		else if(a!=b&&b!=c){
			cout<<"Case #"<<(i+1)<<": scalene\n";
		}
		else{
			cout<<"Case #"<<(i+1)<<": isosceles\n";
		}
	}
	return 0;
}