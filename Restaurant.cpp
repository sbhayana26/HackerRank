// https://www.hackerrank.com/challenges/restaurant

#include<iostream>
using namespace std;
int gcd(int l, int b)        //Basic Euclidean Algorithm
    { if(l==0)
        return b;
    else
        return gcd(b%l,l);
    }
int main()
    { int T;
    cin>>T;
    int l, b, i, side, areaSquare, areaRect;
    for(i=0; i<T; ++i)
        { cin>>l>>b;
        areaRect = l*b;
        side = gcd(l,b);
        areaSquare = side*side;
        cout<<areaRect/areaSquare<<"\n";
        }
    return 0;
    }
