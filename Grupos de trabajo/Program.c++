#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define REP_INDEX_1(x) for(int i=1;i<=x;i++)
#define REP_INDEX_0(x) for(int i=0;i<x;i++)
#define int long long
#define uint unsigned long long
int groups;
string a,b;
string Node="", Childs="", Start, Father;
unordered_map<string, vector<string>> Tree;

void Traversal(){
	queue<string> TravelNode;
	unordered_set<string> AlreadyChecked,AlreadyCheckedFathers;

	TravelNode.emplace(Start);
	string ActualNode;

	while(!TravelNode.empty()){
		ActualNode=TravelNode.front();
		
		if(AlreadyCheckedFathers.find(ActualNode)!=AlreadyCheckedFathers.end()){
			TravelNode.pop();
			continue;
		}
		AlreadyCheckedFathers.emplace(ActualNode);

		for(string Child: Tree[ActualNode]){
			if(Tree[Child].size()!=0){
				TravelNode.emplace(Child);
			}
			else{
				AlreadyChecked.emplace(Child);
			}
		}
		TravelNode.pop();
	}
	cout<<AlreadyChecked.size()<<"\n";
}
signed main()
{
	while(true){
		cin>>groups;
		if(groups==0) break;
		for(int i=0;i<groups;i++){
			cin>>a;
			for(int x=0;x<a.size();x++){
				if(a[x]==','||a[x]=='.'||a[x]==':'){
					if(Tree.find(Node)==Tree.end()){
						Tree[Node]=vector<string>();
					}
					if(a[x]==':'){
						Father=Node;
						if(Start==""){
							Start=Father;
						}
					}
					else{
						Tree[Father].push_back(Node);
					}
					Node="";
				}
				else{
					Node+=a[x];
				}
			}
		}
		Traversal();
		Tree.clear();
		Start="";
		Node="";
		Childs="";
	}
	return 0;
}

