// https://www.hackerrank.com/challenges/strange-grid

#include<iostream>
#include<cmath>
#include<cstdint>
using namespace std;
int main()
    { uint64_t r, c, result=0;
    cin>>r>>c;
    if(r%2==0)
        { result = (10*((r/2)-1)) + 1;
        result+= 2*(c-1);
        }
    else
        { result = 10*floor(r/2);
        result+= 2*(c-1);
        }
    cout<<result;
    return 0;
    }
