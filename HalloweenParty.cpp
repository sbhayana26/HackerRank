// https://www.hackerrank.com/challenges/halloween-party

#include<iostream>
#include<cmath>
#include<cstdint>
using namespace std;
int main()
    { int64_t T, K, i, temp;
    cin>>T;
    for(i=0; i<T; ++i)
        { cin>>K;
        temp = std::floor(K/2);
        cout<<temp * (K-temp)<<"\n";
        }
    return 0;
    }
