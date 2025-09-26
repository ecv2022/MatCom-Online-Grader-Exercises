#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int Z,d, Anterior=50001, Puntaje=1, PuntajeMaximo=1;
vector<int> R;
signed main()
{
	cin>>Z;
	for(int i=0;i<Z;i++){
		cin>>d;
		R.push_back(d);
	}

	sort(R.begin(), R.end());

	for(int q:R){
		if(Anterior==50001){
			Anterior=q;
		}
		else{
			if(Anterior+1==q){
				Puntaje+=1;
				if(Puntaje>PuntajeMaximo){
					PuntajeMaximo=Puntaje;
				}
			}
			else if(Anterior!=q){
				Puntaje=1;
			}
			Anterior=q;
		}
	}
	cout<<PuntajeMaximo;
	return 0;
}

