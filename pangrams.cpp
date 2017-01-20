//Needs modification.
// https://www.hackerrank.com/challenges/pangrams

#include<iostream>
#include<string.h>
using namespace std;
int main()
    { char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
    char upperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s[];
    gets(s);
    int i, j, k[26], k;
    for(i=0; i<26; ++i)
        { for(j=0; j<strlen(s); ++j)
            { if(lowerCase[i]==s[j] || upperCase[i]==s[j])
                k[i] = 1;
            }
        }
    for(i=0; i<26; ++i)
        { if(k[i]==0)
            { k = 0;
            break;
            }
        }
    if(k==0)
        cout<<"not pangram";
    else
        cout<<"pangram";
    return 0;
    }
