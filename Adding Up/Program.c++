#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Z(251,vector<int>(251,0));
void TablaCrear(){
	for(int r=1;r<251;r++){
		Z[r][1]=r;
	}
	for(int r=1;r<251;r++){
		Z[1][r]=1;
	}
	for(int i=2;i<251;i++){
		for(int z=2;z<251;z++){
			Z[i][z]=(Z[i-1][z]+Z[i][z-1])%1000000007;
		}
	}
}
int main()
{
	int a, B, C;
	cin>>a;

	TablaCrear();

	for(int i=0;i<a;i++){
		cin>>B>>C;
		cout<<Z[C][B]<<"\n";
	}
	return 0;
}

