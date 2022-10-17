/*
   Q. An Electricity boat charges the following rate to domestic users
      dsicrage large consumption energy:
    1. For the first 100 units 60 p/unit
    2. For next 200 units 80 p/unit
    3. Beyond 200 units 92 p/units
   all users charge minimum 50 rupees.if the total amount it is more than 300
   rupees then an additional 15% is added.WAP to read the name of users, No of
   units consume and print out charge with the same. */



#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class ElectricityBoard{
      int unit ,charge,scharge;
      char name[30];
   public:
      void getdata();
      void calculate_charge();
      void display();

};
void ElectricityBoard:: getdata(){
     cout<<"    Enter User Name  :";
     gets(name);
     cout<<"    Number Unit      :";
     cin>>unit;


}
void ElectricityBoard:: calculate_charge(){
     if(100>=unit){
       charge=unit*0.60;
     }
     else if(100<=unit &&  unit<=200){
       charge=unit*0.80;
     }
     else{
       charge=unit*0.92;
     }
     if(charge<50){
      charge=50;
    }
    else if(charge>300){
      scharge=charge*0.15;
      charge=scharge+scharge;
    }
    else{
    }

}
void ElectricityBoard:: display(){
      cout<<"    User Name  :"<<name<<endl;
      cout<<"    Bill       :"<<charge<<endl;
}
void main(){
   clrscr();
   ElectricityBoard e[40] ;
   int n;
   cout<<"    How Many Users :";
   cin>>n;
   for(int i=0;i<n;i++){
     e[i].getdata();
     e[i].calculate_charge();
   }
    for(i=0;i<n;i++){
     e[i].display();
    }
   getch();
}


















