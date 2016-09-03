#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include<fstream>

using namespace std;



class roomnode{
  public:
  	string name;
	double area;
	int doors;
	int X,Y,status,chairs,computers;
	roomnode *next,*previous;

	roomnode(string n,double a,int d,int x,int y,int sts,roomnode *last);
	~roomnode( );
    virtual void book(roomnode *book);
    virtual void detail(roomnode *details);
    virtual roomnode* delt(roomnode *delit,roomnode *tail,roomnode *head);
    virtual void operator<<(std::ofstream& put){
    put<<name<<" "<<area<<" "<<doors<<" "<<X<<" "<<Y<<" "<<status<<"\n";}
    
	template <typename T>	
	friend T* nearest(T *location,int x,int y);
   
     

};


class labnode:public roomnode{
  public:
 	labnode(string n,double a,int d,int x,int y,int comp,int sts,roomnode *last);
    void book(roomnode *book);
    void detail(roomnode *details);
    void operator<<(std::ofstream& put){
    put<<name<<" "<<area<<" "<<doors<<" "<<X<<" "<<Y<<" "<<computers<<" "<<status<<"\n";}
    roomnode * delt(roomnode *delit,roomnode *tail,roomnode *head);
    
};


class lecnode:public roomnode{
  public:
  	lecnode(string n,double a,int d,int x,int y,int chrs,int sts,roomnode *last);
    void book(roomnode *book);
    void detail(roomnode *details);
    void operator<<(std::ofstream& put){
    put<<name<<" "<<area<<" "<<doors<<" "<<X<<" "<<Y<<" "<<chairs<<" "<<status<<"\n";}

    roomnode * delt(roomnode *delit,roomnode *tail,roomnode *head);
};


int minroom(int ,roomnode *);


roomnode * equip(roomnode * mover);

void equip(roomnode *mover,string del);
void smallestlh(roomnode *mover);
template <typename T>       //function template
T* nearest(T *location,int x,int y){

float distance;T *near;

distance =((x-(location->X))*(x-(location->X)))+((y-(location->Y))*(y-(location->Y))) ;
near=location;
location=location->next;

 while(location!=NULL){
   if(((x-(location->X))*(x-(location->X)))+((y-(location->Y))*(y-(location->Y))) < distance){
     distance=((x-(location->X))*(x-(location->X)))+((y-(location->Y))*(y-  (location->Y))) ; ;
    near=location;}

  location=location->next;

}

return near;


}




#endif
   



