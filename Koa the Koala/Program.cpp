#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
#define MAX_INT 1000000007
vector<set<int>> Cats;
vector<set<int>> Dogs;
string ZXX="";
int copya;
signed main()
{
	int a, b,c,d;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c>>d;
		if((c+d)>b){
			cout<<"No\n";
		}
		else{
			Cats.clear();
			Dogs.clear();
			Cats.resize(b, set<int>());
			Dogs.resize(b, set<int>());
			for(int i=0;i<b;i++){
				for(int z=i;z<(i+c);z++){
					Dogs[i].emplace((z%(b)));
				}
			}
			int Perro_Actual=0;
			for(int i=0;i<b;i++){
				copya=d;
				Perro_Actual=0;
				while(copya!=0){
					if(Dogs[Perro_Actual].count(i)==0){
						Cats[i].emplace(Perro_Actual);
						copya-=1;
					}
					Perro_Actual=(Perro_Actual+1)%b;
				}
			}
			cout<<"Yes\n";
			for(int i=0;i<b;i++){
				for(int z: Dogs[i]){
					ZXX+=(to_string(z+1)+" ");
				}
				ZXX+="\n";
			}
			for(int i=0;i<b;i++){
				for(int z: Cats[i]){
					ZXX+=(to_string(z+1)+" ");
				}
				ZXX+="\n";
			}
			cout<<ZXX;
			ZXX="";
		}
	}

	return 0;
}

