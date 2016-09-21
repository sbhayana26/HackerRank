//https://www.hackerrank.com/challenges/divisible-sum-pairs

#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int i, j, a[n], count=0;
    for(i=0; i<n; ++i)
        cin>>a[i];
    for(i=0; i<n; ++i)
        { for(j=0; j<i; ++j)
            { if((a[i]+a[j])%k==0)
                count+=1;
            }
        }
    cout<<count;
    return 0;
}
