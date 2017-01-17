// https://www.hackerrank.com/challenges/camelcase

#include<iostream>
#include<string.h>
using namespace std;
int main()
    { char s[100000];
    cin>>s;
    int i, count=1;
    for(i=0; i<strlen(s); ++i)
        { if(s[i]>='A' && s[i]<='Z')
            count+=1;
        }
    cout<<count;
    return 0;
    }
