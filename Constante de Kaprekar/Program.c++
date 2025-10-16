#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
int a; 
int d1, d2, bucle_num=0, lit;
string b;

bool Comp(char &l, char &r){
	return r<l;
}

unordered_map<int,int> Z,R;

string Respuesta(int LL){
	string Anst = to_string(LL);
	while(Anst.size()<5){
		Anst=('0'+Anst);
	}
	return Anst;
}

signed main()
{
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		while(true){
			bucle_num+=1;
			sort(b.begin(), b.end());
			d1=stoi(b);

			sort(b.begin(), b.end(), Comp);
			d2=stoi(b);

			lit=d2-d1;


			if(Z.count((lit))!=0){
				cout<<Respuesta(R[(999999-(bucle_num))%(bucle_num-Z[lit])+Z[lit]])<<"\n";
				break;
			}
			//cout<<lit<<"|\n";

			Z[(lit)]=bucle_num;
			R[bucle_num]=(lit);

			b=Respuesta(lit);
		}
		Z.clear();
		R.clear();
		bucle_num=0;
	}
	return 0;
}