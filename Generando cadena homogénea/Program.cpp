#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
string a;
int aint=0, bint=0;
signed main()
{
	cin>>a;
	if(a[0]=='a'){
		aint+=1;
	}
	else{
		bint+=1;
	}

	for(int i=1;i<a.size();i++){
		if(a[i]!=a[i-1]){
			if(a[i]=='a'){
				aint+=1;
			}
			else{
				bint+=1;
			}
		}
	}
	cout<<min(aint, bint);
	return 0;
}

