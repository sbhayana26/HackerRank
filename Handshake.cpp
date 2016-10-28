// https://www.hackerrank.com/challenges/handshake

#include<iostream>
using namespace std;
int main()
    { int T;
    cin>>T;
    int N, i;
    for(i=0; i<T; ++i)
        { cin>>N;
        int count=0, temp;
        temp = N-1;
        while(temp>=1)
            { count+=temp;
            temp-=1;
            }
        cout<<count<<endl;
        }
    return 0;
    }
