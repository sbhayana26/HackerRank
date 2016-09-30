//https://www.hackerrank.com/challenges/sock-merchant/submissions/code/29168358

#include<iostream>
using namespace std;
int main()
    { int n;
    cin>>n;
    int c[n];
    int i, j, k, tempCount, count=0, found;
    for(i=0; i<n; ++i)
        cin>>c[i];
    for(i=0; i<n; ++i)
        { tempCount = 1;
        found = 0;
        for(j=0; j<i; ++j)
            if(c[j]==c[i])
                found = 1;
        for(j=i+1; j<n; ++j)
            { if(found==1)
                continue;
            else if(c[j]==c[i])
                tempCount+=1;
            }
        count+=tempCount/2;
        }
    cout<<count;
    return 0;
    }
