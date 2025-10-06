#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Text;
string endinga="";
int mmmmm=0;
unordered_set<string> AA;
vector<int> Z;
void All(string a){
	string New=a;
	//cout<<a.size()<<"\n";
	if(New.size()==Text.size()){
		if(AA.count(New)!=1){
			AA.emplace(New);
			mmmmm+=1;
			endinga+=(New+"\n");
		}
		return;
	}
	for(int i=0;i<Text.size();i++){
		if(Z[i]!=1){
			Z[i]=1;
			New.push_back(Text[i]);
			All(New);
			Z[i]=0;
		}
		New=a;
	}
}
int main()
{
	cin>>Text;
	sort(Text.begin(), Text.end());
	Z.resize(Text.size(),0);
	All("");
	cout<<mmmmm<<"\n";
	cout<<endinga;
	return 0;
}

