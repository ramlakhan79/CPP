#include<iostream>
using namespace std;
int  main()
{
   int a,p,r,n,t;
   cout<<"Enter the value of p,r,n and t : ";
   cin>>p>>r>>n>>t;
   a=p*(1+r/n)^n*t;
   cout<<"Compound interest  "<<a;
   return 0;
}