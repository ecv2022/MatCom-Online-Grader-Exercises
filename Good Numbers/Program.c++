#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	int a,b, Suma=0, Primero=-1, Segundo=-1;

	cin>>a>>b;

	for(int i=a;i<=b;i++){
		for(int q=2;q<=sqrt(i);q++){
			if(i%q==0){
				Suma+=(q+(i/q));
			}
		}
		if(Suma>i){
			//cout<<Suma<<"a";
			Primero=i;
			break;
		}
		Suma=0;
	}
	Suma=0;
	for(int i=b;i>=a;i--){
		for(int q=2;q<=sqrt(i);q++){
			if(i%q==0){
				Suma+=(q+(i/q));
			}
		}
		if(Suma>i){
			//cout<<Suma<<"b";
			Segundo=i;
			break;
		}
		Suma=0;
	}

	cout<<Primero<<" "<<Segundo;

	return 0;
}