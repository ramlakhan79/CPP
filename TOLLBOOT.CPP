      /* Imagine a tollbooth  at a bridge cars passing by the booth are expected to pay Rs. 50 tas toll
amount  mostly they do but sometimes a car booth without pay .
	The tollbooth keep track of No of cars that have gone by and of the total amount of collected
model. This tollbooth with a class called TollBoot.
	 The two data items are of a type int to hold the total no of cars and a type double to hold the
total amount of money collecting .
	  A  constructor initializes both of these two zero. A member function called PayingCar()
increaments  the cars  total  and  adds  50  to  the cashtotal  ,   another  function  NonPayingCar()
increament the car total pay but adds nothing to cashtotal.
	  Finally a member function called displays these two totals include a program to test
the class .
	  This  program should allow the user to push one  key to  count paying cars and  another  to
count non paying car. Pushing this $ key  should called the program to print out the total cost and
total cash and then exit . */

#include<iostream.h>
#include<conio.h>

class TollBooth
{
      int car;
      double amt;
    public:
	TollBooth()
	{
	    this->car = 0;
	    this->amt = 0;
	}
	void payingcar()
	{
	    this->car++;
	    this->amt+=50;
	}
	void nonpayingcar()
	{
	    this->car++;
	}
	void display()
	{
	    cout<<"Number of cars: "<<car<<endl;
	    cout<<"Amount: "<<amt<<endl;
	}
};

void main()
{
    char c='$';
    int ch;
    clrscr();
    TollBooth t;
    do{
    cout<<"\n 1. For paying Rs. 50 \n 2. For nopaying  Rs. 0 \n 3. Display/Exit \n";
    cout<<" Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
    t.payingcar();
    cout<<"Car added";
    break;
    case 2:
    t.nonpayingcar();
    cout<<"Car added";
    break;
    case 3:
    t.display();
     c='n';
    break;

    }
   if(c=='$'||c=='$'){
    cout<<"\n   $ press this key : ";
    cin>>c;
   }
    }
    while(c=='$'||c=='4');
    getch();
}