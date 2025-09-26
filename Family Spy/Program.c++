#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int Vector, ADvances;
int a, b;
int x=0,y=0;
signed main()
{
	cin>>Vector>>ADvances;
	for(int i=0;i<Vector;i++){
		cin>>a>>b;
		x+=a;
		y+=b;
	}
	for(int i=0;i<ADvances;i++){
		cin>>a>>b;
		x+=a*Vector;
		y+=b*Vector;
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}

