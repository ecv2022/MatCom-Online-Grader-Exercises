#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int x,z;
vector<int> qm;
signed main()
{
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>z;
		qm.push_back(z);
	}
	sort(qm.begin(), qm.end());
	cout<<abs(qm[0]-qm[qm.size()-1]);
	return 0;
}

