#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>> NumerosSorted;
vector<int> Numeros;
int last=0;
int main()
{
	int a,v;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>v;
		if(NumerosSorted.count(v)!=1){
			NumerosSorted[v].push_back(i+1);
			for(pair<int,vector<int>> zzz: NumerosSorted){
				if(zzz.first<v && last>abs(last-zzz[zzz.second.size()-1])){

				}
				else{
					Numeros.push_back(last);
					break;
				}
			}
		}
	}
	return 0;
}

