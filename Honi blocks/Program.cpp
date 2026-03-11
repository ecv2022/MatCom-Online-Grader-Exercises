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
vector<char> l= {'H','O','N','I'};
int d=0, result=0;
signed main()
{
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]==l[d]){
			d++;
			if(d==4){
				d=0;
				result++;
			}
		}
	}
	cout<<result;
	return 0;
}

