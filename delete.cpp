#include<iostream>
#include"room.h"
#include<stdlib.h>


roomnode * roomnode :: delt(roomnode *delit,roomnode *tail,roomnode *head){
string del;roomnode *end;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"      --------------------ROOMS----------------------\n\n";


  cout<<"Enter the ROOM number you want to delete...\n";
  cin >> del;
  del="Room" + del;
  while(delit!=NULL  && delit->name!=del){  
      delit=delit->next;
     }
   if(delit==NULL)
     cout<<"No such ROOM found !!!\n";
   else{
       end=delit;
      if(delit->next==NULL){              
         tail=delit->previous;
         end=tail;}
      else if(delit->previous==NULL){
         head=delit->next;
         end=head;}
          
       delete delit  ;
      cout<<del<<" successfuly deleted.\n";
     }
return end;
}

roomnode *labnode :: delt(roomnode *delit,roomnode *tail,roomnode *head){
string del;roomnode *end;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"----------------------LABS------------------------\n\n";

 cout<<"Enter the LAB number you want to delete...\n";
     cin>>del;
     del="LAB"+del;
     while(delit!=NULL  && delit->name!=del){  
           delit=delit->next;
         }
     if(delit==NULL)
         cout<<"No such LAB found !!!\n";
     else{
         if(delit->next==NULL){
            tail=delit->previous;
            end=tail;}
         else if(delit->previous==NULL){
             head=delit->next;
             end=head;}
         delete delit ;
         cout<<del<<" successfuly deleted.\n";
       }
}


roomnode * lecnode :: delt(roomnode *delit,roomnode *tail,roomnode *head){
string del;roomnode *end;

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"----------------------LECTURE HALL------------------------\n\n";


  cout<<"Enter the Lecture Hall no. you want to delete...\n";
  cin>>del;
  del="LEC"+del;
     while(delit!=NULL  && delit->name!=del){  
          delit=delit->next;
      }
     if(delit==NULL)
         cout<<"No such LEC found !!!\n";
     else{
         if(delit->next==NULL){
             tail=delit->previous;
             end=tail;}
         else if(delit->previous==NULL){
             head=delit->next;
             end=head;}
         delete delit ;
         cout<<del<<" successfuly deleted.\n";
               }

}
          
