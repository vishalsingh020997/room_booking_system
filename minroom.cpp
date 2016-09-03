#include"room.h"

int minroom(int man,roomnode *rhead){

if(rhead==NULL)
return 0;

roomnode *maxarea,*mover;double area;int n;
maxarea=rhead;
mover=rhead;
area=maxarea->area;
mover=mover->next;

while(mover!=NULL){
  if((mover->area)>area && mover->status==0){
     area=mover->area;
     maxarea=mover;
   }
  mover=mover->next;
 }

if((maxarea->area)<(man*30.00)){
  if (maxarea->previous==NULL){
     rhead=maxarea->next;
 if(rhead!=NULL)
	rhead->previous=NULL;  
}
  else if(maxarea->next==NULL){
   (maxarea->previous)->next=NULL;
   }
  else{
   (maxarea->next)->previous=maxarea->previous;
   (maxarea->previous)->next=maxarea->next;}
int num=((maxarea->area)/30.00);
   n=minroom((man-num),rhead);
   if(n!=0)  
	   	n++;
   if (maxarea->previous==NULL){
   if(rhead)
	   rhead->previous=maxarea;
      rhead=maxarea;
    
   }
  else if(maxarea->next==NULL){
  (maxarea->previous)->next=maxarea;
   }
  else{
   (maxarea->next)->previous=maxarea;
   (maxarea->previous)->next=maxarea;}


cout<<maxarea->name<<" "<<maxarea->area<<" "<<endl;
 return n;
 }

else{
cout<<maxarea->name<<" "<<maxarea->area<<" "<<endl;
 return 1;}



}



