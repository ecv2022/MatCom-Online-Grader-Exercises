#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long

int a,b,c,d=-1;

signed main()
{
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>a>>b;
		d=max(a+b, d);
	}
	cout<<d;
	return 0;
}

