#include<iostream>
using namespace std;
int main()
{
    long long int a[10000],b,d,x,y=1,i,j,t,c=0,k=0,sum1=0,sum2=0;
    cin>>b>>d;
    for(j=b;j<=d;j++)
    {
        sum1=0;sum2=0;k=0;
        x=j*j;
        while(x!=0)
        {
             y=x%10;
             a[k]=y;
             k++;
             x=x/10;     
        }
        for(i=0;i<k/2;i++)
        {
            t=a[i];
            a[i]=a[k-1-i];
            a[k-1-i]=t;
        }
        long long int r;
        for(i=0;i<k/2;i++)
        {
            r=a[i];
            sum1=sum1*10+r;
        }
        for(i=k/2;i<k;i++)
        {
            r=a[i];
            sum2=sum2*10+r;
        }
            if(sum1+sum2==j)
        {
            cout<<j<<" ";
            c++;
        }
    }
    if(c==0)
    cout<<"INVALID RANGE";
}
