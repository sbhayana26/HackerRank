// https://www.hackerrank.com/challenges/find-point

#include<iostream>
using namespace std;
int main()
    { int n, i, p[2], q[2], r[2];
    cin>>n;
    for(i=0; i<n; ++i)
        { cin>>p[0]>>p[1]>>q[0]>>q[1];
        r[0] = (2 * q[0]) - p[0];
        r[1] = (2 * q[1]) - p[1];
        cout<<r[0]<<" "<<r[1]<<endl;
        }
    return 0;
    }
