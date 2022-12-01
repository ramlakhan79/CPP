/* Q.12 WAP to create a class Base (data member is int a) and inherit two
	classes D1(data member int b) and D2 (data member is int c) from
	class Base .
	Create another class D3 to calculate total of abc and inherit it
	from D1 and D2 .
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	int a;
      public:
	 void seta(){
	     cout<<"Enter Value of A :";
	     cin>>a;
	 }
	 int geta(){
	    return a;
	 }
};
class D1 :virtual public Base{
	int b;
       public:
	 void  setb(){
	     cout<<"Enter Value of B :";
	     cin>>b;
	}
	int getb(){
	   return b;
	}
};
class D2 :virtual public Base{
	int c;
       public:
       void setc(){
	     cout<<"Enter value of C :";
	     cin>>c;
	 }
	 int getc(){
	     return c;
	 }
};
class D3 : public D1,public D2{
	int total;
       public:
	  void calculate(){
	     total=geta()+getb()+getc();
	     cout<<"Total is (A+B+C) :"<<total;
	  }
};
int main(){
	D3 d;
	d.seta();
	d.setb();
	d.setc();
	d.calculate();
	return 0;
}