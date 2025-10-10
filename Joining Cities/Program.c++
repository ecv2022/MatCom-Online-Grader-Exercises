#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int a,b, total=0;
vector<int> R;
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
       cin>>b;
       R.push_back(b);
    }
    sort(R.begin(),R.end());
    
    for(int i=1;i<a;i++){
		total += abs(R[i-1]-R[i]);
    }
    cout<<total;
	return 0;
}
