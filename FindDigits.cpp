// https://www.hackerrank.com/challenges/find-digits

#include<iostream>
using namespace std;
int main()
    { int T, i, N, j;
    cin>>T;
    int lastDigit, evenlyDivisibleDigits, numberOfDigits, temp;
    for(i=0; i<T; ++i)
        { cin>>N;
        evenlyDivisibleDigits = 0;
        temp = N;
        numberOfDigits=0;
        while(temp!=0)
            { numberOfDigits+=1;
            temp/=10;
            }
        //cout<<numberOfDigits<<endl;       
        temp = N;
        for(j=0; j<numberOfDigits; ++j)
            { lastDigit = temp%10;
            temp/=10;
            if(lastDigit==0)
                continue;
            if(N%lastDigit == 0)
                evenlyDivisibleDigits+=1;
            }
        cout<<evenlyDivisibleDigits<<endl;
        }
    return 0;
    }
