#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
int a,b;
vector<pair<int,int>> Cards;
int LastCard, r=0;
signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		Cards.push_back({b,0});
	}
	bool Advance=true;
	while(Advance){

		Advance=false;
		
		for(auto i=(--Cards.end());i!=Cards.begin();--i){

			if((*i).first<=(*(i-1)).first&&(*(i-1)).second!=1){
				(*(i-1)).second=1;
				Advance=true;
				Cards.erase(i);
			}
		}
	}

	cout<<Cards.size();

	return 0;
}

