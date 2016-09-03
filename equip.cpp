#include"room.h"
#include"stdlib.h"

//function overloading

roomnode * equip(roomnode *mover){

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"      --------------------LABS---------------------\n\n";
 double density;
 roomnode * least;
 least=mover;
 density=(least->computers)/(least->area);
 mover=mover->next;
 while(mover!=NULL){
   if((mover->computers)/(mover->area)<density){
       density=(mover->computers)/(mover->area);
       least=mover;
    }
 mover=mover->next;
 }

 return least;
}


void equip(roomnode *mover,string del){

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 cout<<"      --------------------LABS---------------------\n\n";

 int n;
 del="LAB"+del;
 while(mover!=NULL  && mover->name!=del){  
     mover=mover->next;
   }
 if(mover==NULL)
   cout<<"No such LAB found !!!\n";
 else{
   cout<<"Enter the number of equipments to add: ";
   cin>>n;
   mover->computers=mover->computers+n;
   cout<<"Equipments added.\n\n";}


}
