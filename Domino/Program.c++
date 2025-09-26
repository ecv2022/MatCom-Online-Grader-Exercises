#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int a,b,y,c;
signed main()
{	
	cin>>a>>b>>y>>c;
	if(a==y||a==c||b==y||b==c){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}

