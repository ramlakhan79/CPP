#include<iostream>
using namespace std;
class Time{
        int hh,mm,ss;
    public:
        void getdata();
        void showdata();
        friend Time add(const Time & ,const Time & );
};
void Time :: getdata(){
        cout<<"Enter The Time (In Hours Minute Second ) :  ";
        cin>>hh>>mm>>ss;
}
void Time :: showdata(){
        cout<<endl<<hh<<" : "<<mm<<" : "<<ss;
}
Time add(const Time &P, const Time &Q){
    Time temp;
    temp.hh=P.hh+Q.hh;
    temp.mm=P.mm+Q.mm;
    temp.ss=P.ss+Q.ss;
    if(temp.ss>=60){
        temp.mm=temp.mm+temp.ss/60;
        temp.ss=temp.ss%60;
    }
    if(temp.mm>=60){
        temp.hh=temp.hh+temp.mm/60;
        temp.mm=temp.mm%60;
    }
    return temp;
}
int main(){
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3=add(t1 ,t2 );
    t1.showdata();
    t2.showdata();
    t3.showdata();
    return 0;
}