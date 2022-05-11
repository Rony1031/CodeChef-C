#include<stdio.h>
void main ()
{
   int i=0;
   int n;
   int t[n];
   printf("\n Enter data\n");
   while(i<n)
   {
      printf("%5d",t[i]);
      i++;
   }
}
//function to calculate sum
int calctot(int t[],int n)
{
    int i=0,tot=t[0];
    while(i<n)
    {
        tot=tot+t[i];
        i++;
    }
    return tot;
}
// function to calculate averge
int calcavg(int t[],int n)
{
    int tot=calctot(t,n);
    return tot/n;
}
//function to find out maximum value
int findmax(int t[],int n)
{
    int max=t[0],i=1;
    while(i<n)
    {
        if(t[i]>max)
           max=t[i];
        i++;
    }
    return max;
}
//function to find out minimum value
int findmin(int t[],int n)
{
  int min=t[0],i=1;
    while(i<n)
    {
        if(t[i]<min)
           min=t[i];
        i++;
    }
    return min;
}
//function to implement sequential value 
int search(int a[],int sv,int n)
{
    int i=0,pos=-1;
    while(i<n)
    {
       if(a[i]==sv)
       {
          pos=i;
          break;
       }
       i++;
    } 
    return pos;
}
//function to implement find and replace
void findRepl(int a[],int sv,int rv,int n)
{
    int i=0;
    while(i<n)
    {
        if(a[i]==sv)
           a[i]=rv;
        i++;
    }
}