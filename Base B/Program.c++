#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007

int casesTest, a,b;
string Result="";

signed main()
{
	cin>>casesTest;
	while(casesTest--){
		cin>>a>>b;
		while(a>=b){
			Result += to_string(a%b);
			a/=b;
			if(a<b){
				Result += to_string(a%b);
			}
		}
		reverse(Result.begin(), Result.end());
		cout<<Result<<"\n";
		Result="";
	}
	return 0;
}

