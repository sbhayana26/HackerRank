//https://www.hackerrank.com/challenges/circular-array-rotation

#include<iostream>
using namespace std;
int main()
	{ int n, k, q;
	cin>>n>>k>>q;
	int arr0[n], arr1[n], i, queries[q];
	for(i=0; i<n; i+=1)
		cin>>arr0[i];
	for(i=0; i<q; i+=1)
		cin>>queries[i];
	int temp;
	for(i=0; i<n; ++i)
        arr1[(i+k)%n] = arr0[i];
	for(i=0; i<q; i+=1)
		cout<<arr1[queries[i]]<<endl;
	return 0;
	}
