#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Number=100, x;
int main()
{
	cin>>x;
	bool Sol= false;
	int F1, F2, F3, F4;

	for(int a=0;a<=Number;a++){
		for(int b=0;b<=Number-a;b++){
			for(int c=0;c<=Number-b-a;c++){
				for(int d=0;d<=Number-c-b-a;d++){
					if(d+c*10+b*100+a*1000==x&& ((d+c+b+a)==100)){
						F1=d;
						F2=c;
						F3=b;
						F4=a;
						Sol=true;
					}
				}
			}
		}
	}
	if(Sol){
		cout<<"Perfect: "<<F4<<"\nGreat: "<<F3<<"\nGood: "<<F2<<"\nBad: "<<F1;
	}
	else{
		cout<<"NO SOLUTION";
	}

	return 0;
}

