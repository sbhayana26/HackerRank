// https://www.hackerrank.com/challenges/mars-exploration

#include<iostream>
#include<cstdio>
using namespace std;
int main()
    { string s;
    getline(cin, s);
    int i, count = 0;
    for(i=0; i<s.length()-2; i+=3)
        { if(s[i]!='S')
            count += 1;
        if(s[i+1]!='O')
            count += 1;
        if(s[i+2]!='S')
            count += 1;
        }
    cout<<count;
    return 0;
    }
