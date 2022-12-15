#include<stdio.h>
#include<conio.h>

void main()
{
int i,x,arr[10]={1,2,3,4,5,6,7,8,9,10};
int pos=5,n=10;
clrscr();
for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
}
x=45;
for(i=n-1;i>pos;i--)
{
arr[i]=arr[i-1];
arr[pos-1]=x;
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
getch();
}