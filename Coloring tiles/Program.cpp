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
int P1, P2;
bool P1b=true, P2b=false;
signed main()
{
	cin>>a;
	for(char d: a){
		P1+=((d-'0')!=P1b);
		P2+=((d-'0')!=P2b);
		P1b=!P1b;
		P2b=!P2b;
	}
	cout<<min(P1,P2);
	return 0;
}

