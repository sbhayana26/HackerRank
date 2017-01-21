// https://www.hackerrank.com/challenges/pangrams

#include<iostream>
#include<string.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
    { char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
    char upperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string test;
    getline(cin, test);
    int i, j, k=0;
    for(i=0; i<26; ++i)
        { for(j=0; j<test.length(); ++j)
            { if(lowerCase[i]==test[j] || upperCase[i]==test[j])
                { k += 1;
                break;
                }
            }
        }
    if(k==26)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
    }
