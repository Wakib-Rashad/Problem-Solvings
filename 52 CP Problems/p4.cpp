/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int t,n,m,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&b);
        printf("%d\n",n*b*m);
    }
    return 0;
}
