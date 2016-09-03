#include"room.h"
#include<stdlib.h>

void smallestlh(roomnode *mover){

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"    --------------------LECTURE HALL-------------------\n\n";
 roomnode *smallest;int students;
 cout<<"enter the number of students strength: ";
 cin>>students;

while(mover!=NULL){
 if(mover->chairs>=students){
  smallest=mover;
  break;}
 mover=mover->next;
}
if(mover==NULL)
cout<<"Sorry!!!No Hall size matches.\n";
else{

  while(mover!=NULL){
    if((mover->chairs)>=students && (smallest->chairs)>=(mover->chairs))
     smallest=mover;
     mover=mover->next;
 }
cout<<"Sallest LECTURE HALL needed: "<<smallest->name<<endl;
}

}

