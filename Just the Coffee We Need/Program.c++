#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int x;
signed main()
{
	cin>>x;
	if(x<49){
		cout<<"TOO COLD";
	}
	else if(x>60){
		cout<<"TOO HOT";
	}
	else{
		cout<<"ACCEPTED";
	}
	return 0;
}

