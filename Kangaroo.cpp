//https://www.hackerrank.com/challenges/kangaroo

#include<iostream>
#include<climits>
using namespace std;
int main()
	{ int x1, v1, x2, v2;
	cin>>x1>>v1>>x2>>v2;
	int i;
	for(i=0; ; ++i)
		{ if ((x2==x1) && (v2==v1))
			{ cout<<"YES";
			break;
			}
        else if((x1==x2) && (v1<v2))
            { cout<<"NO";
            break;
            }
        else if ((x1<=x2) && (v1<=v2))
            { cout<<"NO";
            break;
            }
        else
            { if(((x1-x2)%(v2-v1))==0)
    		    { cout<<"YES";
			    break;
			    }
            else
                { cout<<"NO";
                break;
                }
	        }
        }
	return 0;
	}
