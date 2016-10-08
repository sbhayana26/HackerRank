// https://www.hackerrank.com/challenges/bon-appetit

#include<iostream>
using namespace std;
int main()
    { int n, k;
    cin>>n>>k;
    int c[n], i, totalCost=0;
    for(i=0; i<n; ++i)
        { cin>>c[i];
        totalCost+=c[i];
        }
    int bCharged;
    cin>>bCharged;
    if(bCharged==(totalCost/2))
        cout<<(c[k]/2);
    else
        cout<<"Bon Appetit";
    return 0;    
    }
