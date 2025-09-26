#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
map<char,int> Z;
string d;
int Suma=0;
signed main()
{
	cin>>d;
	for(char r: d){
		if(Z.find(r)==Z.end()){
			Z[r]=1;
		}
		else{
			Z[r]+=1;
		}
	}
	bool Acta=true;
	for(pair<char,int> i: Z){
		if(i.second%2==1&&Acta){
			Suma+=1;
			Acta=false;
		}
		Suma+=(i.second-(i.second%2));
		
	}
	if(Suma==0){
		cout<<1;
	}
	else{
		cout<<Suma;
	}
	
	return 0;
}

