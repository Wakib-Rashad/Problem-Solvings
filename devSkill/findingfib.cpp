/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>

using namespace std;
/**
map <int , int> f;
void mapfill(int n)
{
    for(int i=0; i<=n; i++)
        f[i]=-1;

}
**/

int f1[62500000],f2[62500000],f3[62500000],f4[62500000],f5[62500000],f6[62500000],f7[62500000],f8[62500000];
int f9[62500000],f10[62500000],f11[62500000],f12[62500000],f13[62500000],f14[62500000],f15[62500000],f16[62500000];


void  fi()
{
    int a,i;

    f1[0]=0;
    f1[1]=1;
    for(i=2; i<=62500000; i++)
    {
        a=(f1[i-2]+f1[i-1])%10;
        f1[i]=a;
    }

    f2[0]=(f1[i-62500001]+f1[i-62500002])%10;;
    f2[1]=(f2[0]+f1[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f2[i-2]+f2[i-1])%10;
        f2[i]=a;
    }

    f3[0]=(f2[i-62500001]+f2[i-62500002])%10;;
    f3[1]=(f3[0]+f2[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f3[i-2]+f3[i-1])%10;
        f3[i]=a;
    }

    f4[0]=(f3[i-62500001]+f3[i-62500002])%10;;
    f4[1]=(f4[0]+f3[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f4[i-2]+f4[i-1])%10;
        f4[i]=a;
    }

    f5[0]=(f4[i-62500001]+f4[i-62500002])%10;;
    f5[1]=(f5[0]+f4[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f5[i-2]+f5[i-1])%10;
        f5[i]=a;
    }

    f6[0]=(f5[i-62500001]+f5[i-62500002])%10;;
    f6[1]=(f6[0]+f5[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f6[i-2]+f6[i-1])%10;
        f6[i]=a;
    }

    f7[0]=(f6[i-62500001]+f6[i-62500002])%10;;
    f7[1]=(f7[0]+f6[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f7[i-2]+f7[i-1])%10;
        f7[i]=a;
    }

    f8[0]=(f7[i-62500001]+f7[i-62500002])%10;;
    f8[1]=(f8[0]+f7[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f8[i-2]+f7[i-1])%10;
        f8[i]=a;
    }

    f9[0]=(f8[i-62500001]+f8[i-62500002])%10;;
    f9[1]=(f9[0]+f8[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f9[i-2]+f9[i-1])%10;
        f9[i]=a;
    }
    f10[0]=(f9[i-62500001]+f9[i-62500002])%10;;
    f10[1]=(f10[0]+f9[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f10[i-2]+f10[i-1])%10;
        f10[i]=a;
    }
    f11[0]=(f10[i-62500001]+f10[i-62500002])%10;;
    f11[1]=(f11[0]+f10[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f11[i-2]+f11[i-1])%10;
        f11[i]=a;
    }
    f12[0]=(f11[i-62500001]+f11[i-62500002])%10;;
    f12[1]=(f12[0]+f11[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f12[i-2]+f12[i-1])%10;
        f12[i]=a;
    }
    f13[0]=(f12[i-62500001]+f12[i-62500002])%10;;
    f13[1]=(f13[0]+f12[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f13[i-2]+f13[i-1])%10;
        f13[i]=a;
    }
    f14[0]=(f13[i-62500001]+f13[i-62500002])%10;;
    f14[1]=(f14[0]+f13[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f14[i-2]+f14[i-1])%10;
        f14[i]=a;
    }
    f15[0]=(f14[i-62500001]+f14[i-62500002])%10;;
    f15[1]=(f15[0]+f14[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f15[i-2]+f15[i-1])%10;
        f15[i]=a;
    }
    f16[0]=(f15[i-62500001]+f15[i-62500002])%10;;
    f16[1]=(f16[0]+f15[i-62500001])%10;
    for(i=2; i<=62500000; i++)
    {
        a=(f16[i-2]+f16[i-1])%10;
        f16[i]=a;
    }
}


int main ()
{
    cout<<"hi"<<endl;
    //mapfill(1000000000);
   fi();
    int n,t,i;
    // string s="";
    //  s[0]='0';
    // s[1]='1';
    //int a;

    cin>>t;
    for(i=0; i<=t; i++)
    {
        cin>>n;
        if(n<=62500000)
            printf("Case %d: %d is the last digit.\n",i,f1[n]);
        else if( n>62500000 && n<=62500000*2)
            printf("Case %d: %d is the last digit.\n",i,f2[n-62500001]);
        else if( n>62500000*2 && n<=62500000*3)
            printf("Case %d: %d is the last digit.\n",i,f3[n-62500001]);
        else if( n>62500000*3 && n<=62500000*4)
            printf("Case %d: %d is the last digit.\n",i,f4[n-62500001]);
        else if( n>62500000*4 && n<=62500000*5)
            printf("Case %d: %d is the last digit.\n",i,f5[n-62500001]);
        else if( n>62500000*5 && n<=62500000*6)
            printf("Case %d: %d is the last digit.\n",i,f6[n-62500001]);
        else if( n>62500000*6 && n<=62500000*7)
            printf("Case %d: %d is the last digit.\n",i,f7[n-62500001]);
        else if( n>62500000*7 && n<=62500000*8)
            printf("Case %d: %d is the last digit.\n",i,f8[n-62500001]);
        else if( n>62500000*8 && n<=62500000*9)
            printf("Case %d: %d is the last digit.\n",i,f9[n-62500001]);
        else if( n>62500000*9 && n<=62500000*10)
            printf("Case %d: %d is the last digit.\n",i,f10[n-62500001]);
        else if( n>62500000*10 && n<=62500000*11)
            printf("Case %d: %d is the last digit.\n",i,f11[n-62500001]);
        else if( n>62500000*11 && n<=62500000*12)
            printf("Case %d: %d is the last digit.\n",i,f12[n-62500001]);
        else if( n>62500000*12 && n<=62500000*13)
            printf("Case %d: %d is the last digit.\n",i,f13[n-62500001]);
        else if( n>62500000*13 && n<=62500000*14)
            printf("Case %d: %d is the last digit.\n",i,f14[n-62500001]);
        else if( n>62500000*14 && n<=62500000*15)
            printf("Case %d: %d is the last digit.\n",i,f15[n-62500001]);
        else if( n>62500000*15 && n<=62500000*16)
            printf("Case %d: %d is the last digit.\n",i,f16[n-62500001]);

    }
    return 0;
}