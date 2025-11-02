#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
struct spirit{
	int x,y,z;
};
multiset<int> x,y,z;
int Spit=1, CaseTests, Operat;
map<int, spirit> Spirits;
spirit qq;

string OperRe;
int xS,yS,zS;
int Result=0;

vector<int> zzzzz;

signed main()
{
	cin>>CaseTests;
	while(CaseTests!=0){
		cin>>Operat;

		while(Operat!=0){
			cin>>OperRe;

			if(OperRe=="ADD"){
				cin>>xS>>yS>>zS;

				qq.x=xS;
				qq.y=yS;
				qq.z=zS;

				x.insert(xS);
				y.insert(yS);
				z.insert(zS);
				
				Spirits[Spit]=qq;
				Spit+=1;
			}
			else if (OperRe=="REMOVE"){
				cin>>xS;

				x.erase(x.find(Spirits[xS].x));
				y.erase(y.find(Spirits[xS].y));
				z.erase(z.find(Spirits[xS].z));
			}
			if(x.size()!=0){
				Result+=abs((((*(x.rbegin()))-(*x.begin())) * ((*(z.rbegin()))-(*z.begin())))*2);
				Result+=abs((((*(x.rbegin()))-(*x.begin())) * ((*(y.rbegin()))-(*y.begin())))*2);
				Result+=abs((((*(y.rbegin()))-(*y.begin())) * ((*(z.rbegin()))-(*z.begin())))*2);
			}
			zzzzz.push_back(Result);
			
			Result=0;
			Operat-=1;
		}
		CaseTests-=1;
		Spirits.clear();
		Spit=1;
		x.clear();
		y.clear();
		z.clear();
	}

	for(int r: zzzzz){
		cout<<r<<"\n";
	}
	return 0;
}

