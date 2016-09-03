#include"room.h"
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
void roomnode::detail(roomnode *details){
system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"      --------------------ROOMS---------------------\n\n";
string roomno;

cout<<"Enter the room number you want the details for...";
cin>>roomno;
roomno="Room"+roomno;
  while(details!=NULL  && details->name!=roomno){  
      details=details->next;
   }
   if(details==NULL)
     cout<<"No such ROOM found !!!\n";
   else
     cout<< "NAME: "<<details->name<<"\n"<<"AREA: "<<
     details->area<<"\n"<< "NO. OF DOORS: "<<details->doors<<"\n"<<
    "ROOM CENTER(X): "<<details->X<<"\n"<<"ROOM CENTER(Y):"
     <<details->Y<<"\n"<< "BOOKING STATUS:"<<details->status 
     <<"\n";

}

void labnode::detail(roomnode *details){

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"      --------------------LABS---------------------\n\n";
string roomno;

cout<<"Enter the lab number you want the details for...";
cin>>roomno;
roomno="LAB"+roomno;
  while(details!=NULL  && details->name!=roomno){  
      details=details->next;
   }
  if(details==NULL)
      cout<<"No such LAB found !!!\n";
  else
      cout<< "NAME: "<<details->name<<"\n"<<"AREA: "<<
      details->area<<"\n"<< "NO.OF DOORS: "<<details->doors<<"\n"<<
      "LAB CENTER(X): "<<details->X<<"\n"<<"LAB CENTER(Y):"
      <<details->Y<<"\n"<<"NO. OF COMPUTERS:" << 
       details->computers<<"\n"<< "BOOKING STATUS:"<<
       details->status <<"\n";

}




void lecnode::detail(roomnode *details){

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"   --------------------LECTURE HALL---------------------\n\n";
string roomno;

cout<<"Enter the lecture hall number you want the details for...";
cin>>roomno;
roomno="LEC"+roomno;
  while(details!=NULL  && details->name!=roomno){  
       details=details->next;
    }
  if(details==NULL)
       cout<<"No such LECTURE HALL found !!!\n";
  else
       cout<< "NAME: "<<details->name<<"\n"<<"AREA: "<<
       details->area<<"\n"<< "NO. OF DOORS: "<<details->doors<<"\n"<<
       "LEC CENTER(X): "<<details->X<<"\n"<<"LEC CENTER(Y):"
       <<details->Y<<"\n"<<"NO. OF CHAIRS:" << 
        details->chairs<<"\n"<< "BOOKING STATUS:"<<
        details->status <<"\n";
}
