#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int x;
signed main()
{
	cin>>x;
	int z=1*(x/5)+3*(x/5)+5*(x/5)+7*(x/5)+9*(x/5);
	x%=5;
	for(int i=1;i<x*2;i+=2){
		z+=i;
	}
	cout<<z;
	return 0;
}

