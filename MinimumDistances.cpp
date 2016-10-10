// https://www.hackerrank.com/challenges/minimum-distances

#include<iostream>
using namespace std;
int main()
    { int n;
    cin>>n;
    int A[n], i, j, smallest=1001;
    for(i=0; i<n; ++i)
        cin>>A[i];
    int diff;
    for(i=0; i<n; ++i)
        { for(j=i+1; j<n; ++j)
            { if(A[j]==A[i])
                { diff=j-i;
                if(diff<smallest)
                    { smallest = diff;
                    }
                }
            }
        }
    if(smallest==1001)
        cout<<"-1";
    else
        cout<<smallest;
    return 0;
    }
