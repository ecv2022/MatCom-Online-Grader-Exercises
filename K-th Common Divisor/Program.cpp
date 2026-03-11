#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b,c, total=0;
signed main()
{
	cin>>a>>b>>c;
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0&&b%i==0){
			total+=1;
			if(total==c){
				cout<<i;
				break;
			}
		}
	}
	return 0;
}

