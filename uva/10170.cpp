/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long long int s,d,c,f;
    while(scanf("%lld%lld",&s,&d)!=EOF)
    {
        c=0;
        f=0;

        while(1)
        {
            c=c+s;
            if(c>=d)
            {
                f=1;
                cout<<s<<endl;
                break;
            }
            s++;
        }
    }
    return 0;
}
