#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string,vector<int>> Liquids;


signed main()
{
	int a,b, x, Dens=0, q=0, zzz=999999999;
	string d, Prev="";
	bool m=true;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>d>>x;
		if(Liquids.count(d)==0) Liquids.emplace(d, vector<int>());
		
		Liquids[d].push_back(x);
	}
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>d;
		if(Liquids.count(d)!=0){
			q=Dens;
			for(int i : Liquids[d]){
				//cout<<i<<"|"<<(i>q)<<(zzz>i)<<"q\n";
				if(i>q && zzz>i){
					Dens=i;
					zzz=i;
				}
			}
			zzz=999999999;
			if(q==Dens){
				cout<<"No";
				m=false;
				break;
			}
		}
		else{
			cout<<"No";
			m=false;
			break;
		}
	}
	if(m){
		cout<<"Yes";
	}
	return 0;
}

