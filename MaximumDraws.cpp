// https://www.hackerrank.com/challenges/maximum-draws/submissions/code/31167549

#include<iostream>
using namespace std;
int main()
    { int T, i, N;
    cin>>T;
    for(i=0; i<T; ++i)
        { cin>>N;
        cout<<N+1<<"\n";    //Arrange the socks alternatively (assuming 3 pairs - RRBBGG) - RBGRBG
        }
    return 0;
    }
