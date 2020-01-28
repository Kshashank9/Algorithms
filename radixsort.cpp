
#include<iostream>
using namespace std;
void count(int a[],int n,int k)
{
        int c[15]; int b[15]; int m=0;
        for(int i=0;i<n;i++)
        {
         if(m<((a[i]/k)%10))
          m=((a[i]/k)%10);
  }
        for(int i=0;i<=m;i++)
        {
                c[i]=0;
        }      
        for(int i=0;i<n;i++)
        {
                c[(a[i]/k)%10]+=1;
        }
       
        for(int i=1;i<=m;i++)
        {
                c[i]=c[i-1]+c[i];
        }
        for(int i=n-1;i>=0;i--)
        {
                b[c[(a[i]/k)%10]-1]=a[i];              
                c[(a[i]/k)%10]=c[(a[i]/k)%10]-1;
        }
       
        for(int i=0;i<5;i++)
        {
                a[i]=b[i];
        }
}
void radixsort(int a[],int n)
{
 int k; int t=1235;
 for(k=1;(t/k)>0;k=k*10) {
 count(a,5,k);
 }
}
int main()
{
 int a[5];
        for(int i=0;i<5;i++)
        {
                cin>>a[i];
        }
        radixsort(a,5);
        for(int i=0;i<5;i++)
        {
                cout<<a[i]<<" ";
        }
}