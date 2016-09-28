//https://www.hackerrank.com/challenges/repeated-string/submissions/code/28989290 

#include<iostream>
#include<string>
#include<stdint.h>
using namespace std;
int main()
    { std::string s;
    getline(cin,s);
    uint64_t len = s.length();
    uint64_t n, i;
    uint64_t count = 0;
    cin>>n;
    for(i=0; i<len; ++i)
        { if(s[i]=='a')
            count+=1;
        }
    count = count*(n/len);
    uint64_t rem;
    rem = n%len;
    i=0;
    while(rem>0)
        { if(s[i]=='a')
            count+=1;
        i+=1;
        rem-=1;
        }    
    cout<<count;
    return 0;    
    }
