#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> LCS;
string a,b;
signed main()
{
	cin>>a>>b;
	LCS.resize(b.size(),vector<int>(a.size(),0));
	for(int i=0;i<b.size();i++){
		for(int k=i;k<a.size();k++){
			if(k!=0){
				LCS[i][k]=(LCS[i][k-1]%1000000007);
			}
			if(b[i]==a[k]){
				if(i!=0){
					LCS[i][k]+=(LCS[i-1][k-1]%1000000007);
				}
				else{
					LCS[i][k]+=1;
				}
			}
		}
	}

	int Total=0;
	for(int k=0;k<a.size();k++){
		Total=(max(LCS[b.size()-1][k],Total)%1000000007);
	}
	cout<<Total;

	return 0;
}

