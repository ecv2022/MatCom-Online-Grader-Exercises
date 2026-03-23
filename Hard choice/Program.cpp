#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b,c,a1,b1,c1;
signed main()
{
	cin>>a>>b>>c>>a1>>b1>>c1;
	cout<<(a1-min(a,a1))+(b1-min(b,b1))+(c1-min(c,c1));
	return 0;
}

