#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
struct NodeZ{
	string Father;
	int X=1;
};
NodeZ Second;
map<string, NodeZ> Grafo;
string DU(string Element){
	if(Grafo.count(Element)==0){
		Grafo[Element]=NodeZ();
		Grafo[Element].Father=Element;
		return Element;
	}

	if(Grafo[Element].Father==Element){
		return Element;
	}
	else{
		Grafo[Element].Father = DU(Grafo[Element].Father);
		return Grafo[Element].Father;
	}
}
signed main()
{
	int a;
	vector<int> Zq;
	string Primero, Segundo;
	string F1,F2;
	int Tests;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>Tests;
		for(int z=0;z<Tests;z++){
			cin>>F1>>F2;

			Primero = DU(F1);
			Segundo = DU(F2);
			if(Primero!=Segundo){
				Grafo[Segundo].Father=Primero;
				Grafo[Primero].X+=Grafo[Segundo].X;
				Zq.push_back(Grafo[Primero].X);
			}
			else{
				Zq.push_back(Grafo[Primero].X);
			}
		}
		Grafo.clear();
	}

	for(int mmmmm: Zq){
		cout<<mmmmm<<"\n";
	}



	return 0;
}

