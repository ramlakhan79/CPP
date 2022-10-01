#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n>0)
     cout<<"Given number is Positive "<<n;
    else if(n<0)
     cout<<"Given number is Negative "<<n;
    else
     cout<<"Given number is NonPostive&Negative "<<n;

     return 0;      
}