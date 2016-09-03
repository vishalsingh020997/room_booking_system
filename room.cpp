#include<iostream>
#include"room.h"

using namespace std;





//constructor
roomnode::roomnode(string n,double a,int d,int x,int y,int sts,roomnode *last){
     area=a;
     name=n;
     doors=d;
     X=x;
     Y=y;
     status=sts;
     next=NULL;
     previous=last;

   }
  
roomnode::~roomnode( ){
      
     if (next==NULL)
     	 previous->next=NULL;
     else if(previous==NULL)
     	 next->previous=NULL;
     else{
         next->previous=previous;
         previous->next=next;}
   
   }


/*void roomnode::book(roomnode *book){
 int n2;string roomno;
 cout<<"--------------------ROOMS------------------------\n\n";
 cout<<"What do you want to do....\n"<<"1. BOOK\n"<<"2. UNBOOK\n";
 cin>>n2;

if (n2==1 || n2==2){
  switch(n2){
     case 1: while(book!=NULL  && book->status!=0){  
            book=book->next;
            }
            if(book==NULL)
              cout<<"No empty ROOM available\n";
              
            else{
              book->status=1;
             cout<<"Booking done.You have been alloted "<<book->name<<"\n";}
     break;
     case 2: 
            cout<<"Enter the Room number you want to unbook\n";
            cin>>roomno;
            roomno="Room" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such room found !!!";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked\n";}


           
      };
}
else
cout<<"Invalid input";

}*/

/////////////////////////////////////////////////////////////////////////
//inheritence
 labnode::labnode(string n,double a,int d,int x,int y,int comp,int sts,roomnode *last):roomnode  (n,a,d,x,y,sts,last){
     computers=comp;}

/*
void labnode:: book(roomnode *book){
 int n2;string roomno;
 cout<<"--------------------LABS------------------------\n\n";
 cout<<"What do you want to do....\n"<<"1. BOOK\n"<<"2. UNBOOK\n";
 cin>>n2;

if (n2==1 || n2==2){
  switch(n2){
     case 1: while(book!=NULL  && book->status!=0){  
            book=book->next;
            }
            if(book==NULL)
              cout<<"No empty LAB available\n";
              
           else{
              book->status=1;
             cout<<"Booking done.You have been alloted "<<book->name<<"\n";}
     break;
     case 2: 
            cout<<"Enter the Lab number you want to unbook\n";
            cin>>roomno;
            roomno="LAB" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such lAB found !!!";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked\n";}


           
      };
}
else
cout<<"Invalid input";

}
*/

////////////////////////////////////////////////////////////////////////
 lecnode:: lecnode(string n,double a,int d,int x,int y,int chrs,int sts,roomnode *last):roomnode  (n,a,d,x,y,sts,last){
 	 chairs=chrs;}
/*
void lecnode:: book(roomnode *book){
 int n2;string roomno;
 cout<<"--------------------ROOMS------------------------\n\n";
 cout<<"What do you want to do....\n"<<"1. BOOK\n"<<"2. UNBOOK\n";
 cin>>n2;

if (n2==1 || n2==2){
  switch(n2){
     case 1: while(book!=NULL  && book->status!=0){  
            book=book->next;
            }
            if(book==NULL)
              cout<<"No empty ROOM available\n";
              
           else{
              book->status=1;
             cout<<"Booking done.You have been alloted "<<book->name<<"\n";}
     break;
     case 2: 
            cout<<"Enter the Room number you want to unbook\n";
            cin>>roomno;
            roomno="Room" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such room found !!!";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked\n";}


           
      };
}
else
cout<<"Invalid input";

}

*/

