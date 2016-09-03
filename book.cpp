#include"room.h"
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
void roomnode::book(roomnode *book){
 int n2;string roomno;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"      --------------------ROOMS---------------------\n\n";
 cout<<"What do you want to do:\n"<<"1. BOOK\n"<<"2. UNBOOK\n\n";
 cout<<"Enter the number...";
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
                 cout<<"Booking done.You have been alloted: "<<book->
                 name<<"\n";}
      break;

     case 2: 
             cout<<"Enter the Room number you want to unbook\n";
             cin>>roomno;
             roomno="Room" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such ROOM found !!!\n";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked.\n";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked!!!\n";}
  };

  }
 else
 cout<<"Invalid input\n";

}


/////////////////////////////////////////////////////////////////////////////
void labnode:: book(roomnode *book){
 int n2;string roomno;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"      --------------------LABS------------------------\n\n";
 cout<<"What do you want to do....\n"<<"1. BOOK\n"<<"2. UNBOOK\n\n";
 cout<<"Enter the number...";
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
             cout<<"Booking done.You have been alloted: "<<book->name<<"\n";}
     break;
     case 2: 
            cout<<"Enter the Lab number you want to unbook\n";
            cin>>roomno;
            roomno="LAB" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such lAB found !!!\n";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked.\n";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked!!!\n";}


           
      };
}
else
cout<<"Invalid input";

}


/////////////////////////////////////////////////////////////////////////////
 

void lecnode:: book(roomnode *book){
 int n2;string roomno;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"    ------------------LECTURE HALL----------------------\n\n";
 cout<<"What do you want to do....\n"<<"1. BOOK\n"<<"2. UNBOOK\n\n";
 cout<<"Enter the number..."; 
 cin>>n2;

if (n2==1 || n2==2){
  switch(n2){
     case 1: while(book!=NULL  && book->status!=0){  
              book=book->next;
            }
             if(book==NULL)
              cout<<"No empty LECTURE HALL available\n";
              
             else{
              book->status=1;
              cout<<"Booking done.You have been alloted: "<<book->name<<"\n";}
      break;

     case 2: 
            cout<<"Enter the LECTURE HALL number you want to unbook\n";
            cin>>roomno;
            roomno="Room" + roomno;
               while(book!=NULL  && book->name!=roomno){  
                book=book->next;
                 }
               if(book==NULL)
                cout<<"No such LECTURE HALL found !!!\n";
               else{
                if(book->status==1){
                  cout<<book->name<<" "<<"succesfully unbooked.\n";
                  book->status=0;}
                else
                  cout<<roomno<<" is already unbooked!!!\n";}


           
      };
}
else
cout<<"Invalid input";

}



