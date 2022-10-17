/* Q.1 WAP To create employee class with data members emp_code,emp_name,
   emp_age,emp_designation,emp_basic_salary,ta,da,hra accepting input
   from the user side and display employee data with its net salay.
   Also define functions outside the class. */


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
  {
   private:
      long long int emp_code,emp_age,emp_basic_salary,ta,da,hra,gs,ns;
      char emp_name[20],emp_designation[30];
   public:
      void emp_input();
      void emp_output();
  };
  void employee::emp_input()
  {
     cout<<"Enter Your code : ";
     cin>>emp_code;
     cout<<"Enter Your Name : ";
     gets(emp_name);
     cout<<"Enter Your age : ";
     cin>>emp_age;
     cout<<"Enter Your designation : ";
     gets(emp_designation);
     cout<<"Enter Your basic salary : ";
     cin>>emp_basic_salary;
     cout<<"Enter Your Travel Allowence : ";
     cin>>ta;
     cout<<"Enter Your Dearness Allowence : ";
     cin>>da;
     cout<<"Enter your House Rent Allowence : ";
     cin>>hra;
  }
   void employee::emp_output()
   {
     cout<<"\nYour code : "<<emp_code;

     cout<<"\nYour name : "<<emp_name;

     cout<<"\nYour age : "<<emp_age;

     cout<<"\nYour designation : "<<emp_designation;

     cout<<"\nYour basic salary : "<<emp_basic_salary;

     cout<<"\nYour Travel Allowence : "<<ta;

     cout<<"\nYour Dearness Allowence : "<<da;

     cout<<"\nYour House Rent Allowence : "<<hra;

       gs=emp_basic_salary+ta+da+hra;

     cout<<"\nYour Net Salary : "<<gs-gs*10/100;
   }

void main()
{
  clrscr();
  employee obj;
    obj.emp_input();
    obj.emp_output();
  getch();
}