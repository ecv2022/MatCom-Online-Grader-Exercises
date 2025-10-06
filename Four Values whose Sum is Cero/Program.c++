#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> Segundo;
vector<int> Primero;
vector<vector<int>> M;
int rrrr=0;
int pos=0;
signed main()
{
	int a;
	cin>>a;
	M.resize(a, vector<int>(4,0));
	for(int x=0;x<a;x++){
		for(int y=0;y<4;y++){
			cin>>M[x][y];
		}
	}
	for(int x=0;x<a;x++){
		for(int y=0;y<a;y++){
			rrrr=(M[x][2]+M[y][3]);

			if(Segundo.find(rrrr)==Segundo.end()){
				Segundo[rrrr]=0;
			}

			Segundo[rrrr]+=1;
		}
	}

	for(int x=0;x<a;x++){
		for(int y=0;y<a;y++){
			rrrr=(M[x][0]+M[y][1]);

			if(Segundo.find((rrrr*-1))!=Segundo.end()){
				pos+=Segundo[(rrrr*-1)];
			}
		}
	}
	cout<<pos;
	return 0;
}

