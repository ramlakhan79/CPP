/* Create two Classes Fruit  and Bascket attributes  Ch of character
   type and Num of integer type .Method of class Basket getdata(),
   displaydata().Class basket as a friend  by using friend  */

#include<iostream.h>
#include<conio.h>

class Basket;
class Fruit{
	char ch;
	int num;
     public:
	Fruit(){
	ch='a';
	num=0;
	}
     friend class Basket ;

};
class Basket{
       public:
  Fruit  getdata(Fruit obj){
	  cout<<"Enter Character : ";
	  cin>>obj.ch;
	  cout<<"Enter Number : ";
	  cin>>obj.num;
       return obj;
       }
void displaydata(Fruit obj){
      cout<<"Character  : "<<obj.ch<<endl;
      cout<<"Number : "<<obj.num<<endl;
      }
};
void main(){
 clrscr();
 Fruit F1;
 Basket B1;
 Fruit F2=B1.getdata(F1);
 B1.displaydata(F2);
 getch();
}