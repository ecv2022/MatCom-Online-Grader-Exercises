#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long

int Largo, PosI, Pasos;
int cow;
vector<int> CowsRow;

signed main()
{
	cin>>Largo>>PosI>>Pasos;
	PosI-=1;
	CowsRow.resize(Largo);

	for(int i=0;i<Largo;i++){
		cin>>CowsRow[i];
	}

	cout<<CowsRow[(PosI+(Pasos%Largo))%Largo];
	

	return 0;
}

