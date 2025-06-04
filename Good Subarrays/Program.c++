#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
vector<int> Z;
int a,b;
int at,ad;
int xr(int num){
	int Par=0, Impar=0, Respuesta=0,  Biggest=-1;
	at=num;
	ad=num;
	at-=1;
	ad+=1;

	Respuesta += (Z[num]+1)%2;
	Par += (Z[num]+1)%2;
	Impar +=(Z[num])%2;
	Biggest = Z[num];

	while((at>=0&&ad<=(Z.size()-1)) && (Z[at]<Z[num]&&Z[ad]<Z[num])){

		Par += (Z[at]+1)%2;
		Impar +=(Z[at])%2;

		Par += (Z[ad]+1)%2;
		Impar +=(Z[ad])%2;

		if(Par>Impar) Respuesta += 1;

		at-=1;
		ad+=1;
	}
	return Respuesta;
}

signed main()
{
	int Total=0;
	cin>>a;
	Z.resize(a);
	for(int i=0;i<a;i++){
		cin>>Z[i];
	}

	for(int i=0;i<a;i++){
		Total+=xr(i);
	}

	cout<<Total;
	return 0;
}

