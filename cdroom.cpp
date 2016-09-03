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
//destructor  
roomnode::~roomnode( ){
      
     if (next==NULL)
     	 previous->next=NULL;
     else if(previous==NULL)
     	 next->previous=NULL;
     else{
         next->previous=previous;
         previous->next=next;}
   
   }




/////////////////////////////////////////////////////////////////////////
//inheritence
 labnode::labnode(string n,double a,int d,int x,int y,int comp,int sts,roomnode *last):roomnode  (n,a,d,x,y,sts,last){
     computers=comp;}


////////////////////////////////////////////////////////////////////////
 lecnode:: lecnode(string n,double a,int d,int x,int y,int chrs,int sts,roomnode *last):roomnode  (n,a,d,x,y,sts,last){
 	 chairs=chrs;}

