/* Q.11 Implement bank management system using classes and inheritance
	1. Saving Account.  2. Current Account. ( Account ,Deposition,
	Withdrawal, Balance Enquiry ).   */

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Account{
	char Name[25],AccountNo[30];
     public :
	void getAccountDetails(){
	   cout<<"\n  Fill Account Holder Details->\n"<<endl;
	   cout<<"      Name  : ";
	   gets(Name);
	   cout<<"      Account Number : ";
	   cin>>AccountNo;
	}
	void DisplayDitails(){
	   cout<<"\n\n\n  Show Your Ditails->\n"<<endl;
	   cout<<"      Name : "<<Name<<endl;
	   cout<<"      Account Number : "<<AccountNo<<endl;
	}
};
class Current_Account: public Account{
      long int Current_Balance,cb,W_Amount;
      public:
	 Current_Account(){
	   Current_Balance=500;
	 }
	void C_Display(){
	  cout<<"      Your Current Balance : " <<Current_Balance;
	}
	void C_Diposit(){
	  cout<<"  Enter Deposit Amount : ";
	  cin>>cb;
	  Current_Balance+=cb;
	}
	void C_Withdrawal(){
	   cout<<"  Enter Withdrawal Amount : ";
	   cin>>W_Amount;
	   Current_Balance-=W_Amount;
	   if(Current_Balance>=500){
	     cout<<"\n\n\n\n     Withdrawal Amount : "<<W_Amount<<endl;
	   }
	   else{
	    cout<<"  Insufficient Amount ! ";
	    Current_Balance+=W_Amount;
	   }
	}
};
class Saving_Account: public Account{
      long int Saving_Balance,sb,W_Amount;
      public:
	  Saving_Account(){
	    Saving_Balance=1000;
	  }
	void S_Display(){
	  cout<<"      Your Current Balance : " <<Saving_Balance;

	}
	void S_Diposit(){
	  cout<<"  Enter Deposit Amount :";
	  cin>>sb;
	  Saving_Balance+=sb;
	}
	void S_Withdrawal(){
	   cout<<"  Enter Withdrawal Amount : ";
	   cin>>W_Amount;
	   Saving_Balance-=W_Amount;
	   if(Saving_Balance>=1000){
	     cout<<"\n\n\n\n  Withdrawal Amount : "<<W_Amount<<endl;
	   }
	   else{
	    cout<<"  Insufficient Amount ! ";
	    Saving_Balance+=W_Amount;
	   }
	}
};

void main(){
    char c1,A_type;
   do{
      cout<<"\n\n  Option To Open Account "<<endl;
      cout<<"\n      1.Current Account \n      2.Saving Acount\n      3.Exit\n";
      cout<<"\n  Choose Your Choice (c/s) : ";
      cin>>A_type;
      switch(A_type){
	case 's' : case 'S': case '2':
		  int ch1;
		  char c2;
		  Saving_Account SA;
		  SA.getAccountDetails();
	       do{
		  
		  cout<<"\n   :: Account Menu ::"<<endl;
		  cout<<"\n      1.Balance Enquiry \n      2.Diposit \n      3.Withdrawal";
		  cout<<"\n\n  Enter Your Choice : ";
		  cin>>ch1;
		  switch(ch1){
		    case 1:
			   SA.DisplayDitails();
			   cout<<"      Account Type Saving "<<endl;
			   SA.S_Display();
			   break;
		    case 2:SA.S_Diposit();
			   break;
		    case 3:SA.S_Withdrawal();
			   break;
		    default:
			   cout<<"  Invalid Choice !!!";
		  }
		  cout<<"\n\n  Do You Want To Continue ....(Y/N) : ";
		  cin>>c2;
		}while(c2=='Y'||c2=='y');
		 break;
	case 'c': case 'C': case '1':
		 int ch2;
		 char c3;
		 Current_Account CA;
		 CA.getAccountDetails();
	      do{
		 
		 cout<<"\n   :: Account Menu ::"<<endl;
		 cout<<"\n      1.Balance Enquiry \n      2.Diposit \n      3.Withdrawal";
		 cout<<"\n\n  Enter Your choice : ";
		 cin>>ch2;
		 switch(ch2){
		   case 1:
			  CA.DisplayDitails();
			  cout<<"      Account Type Current "<<endl;
			  CA.C_Display();
			  break;
		   case 2:CA.C_Diposit();
			  break;
		   case 3:CA.C_Withdrawal();
			  break;
		   default:
			   cout<<"  Invalid Choice !!!";
		 }
		 cout<<"\n\n  Do You Want To Continue....(Y/N): ";
		 cin>>c3;
	       }while(c3=='Y'||c3=='y');
		 break;
	case '3':case 'e': case 'E':
		 exit(0);
	default:
		cout<<"  Invalid Type ..!";
      }
      cout<<"\n  Want To Change Your Account Type (Y/N) : ";
      cin>>c1;
    }while(c1=='Y'||c1=='y');
  
  cout<<"\n\n\n\n\n\n\n\n\n                  **Thank You For Choosing This Bank**";
  getch();
}