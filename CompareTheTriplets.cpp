#include<iostream>
using namespace std;
int main()
	{ int a[3], b[3], i;
	for(i=0; i<3; ++i)
		cin>>a[i];
	for(i=0; i<3; ++i)
		cin>>b[i];
	int pointsAlice=0, pointsBob=0;
	for(i=0; i<3; ++i)
		{ if(a[i]>b[i])
			++pointsAlice;
		else if(a[i]<b[i])
			++pointsBob;
		else
			continue;
		}
	cout<<pointsAlice<<" "<<pointsBob;
	return 0;
	}
	
	
	
