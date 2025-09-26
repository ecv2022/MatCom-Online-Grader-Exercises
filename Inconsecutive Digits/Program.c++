#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int x=0,y=0;
string Pair(int a){
	string b="";
	for(int i=a;i<=9;i+=2){
		if(i!=x && i!=y){
			b+=(to_string(i)+" ");
		}
	}
	return b;
}
signed main()
{
	cin>>x>>y;
	if(y%2==0){
		cout<<x<<" "<<y<<" "<<Pair(0)<<Pair(1);
	}
	else{
		cout<<x<<" "<<y<<" "<<Pair(1)<<Pair(0);
	}
	return 0;
}

