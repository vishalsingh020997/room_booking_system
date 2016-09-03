#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"room.h"
#include<stdlib.h>
#include<cstdio>


using namespace std;


//////////////////////////////MAIN/////////////////////////////////////
int main(){

roomnode *rhead=NULL,*rtail=NULL,*rptr=NULL,*rlast;
roomnode *lbhead=NULL,*lbtail=NULL,*lbptr=NULL,*lblast;
roomnode *lchead=NULL,*lctail=NULL,*lcptr=NULL,*lclast;

string name;
double area;
int doors,x,y,comps,chairs;
int status;
int roomn=-1,labn=-1,lecn=-1;
int c;
//------------------------------------------------//


fstream myfile;
ifstream infile("ROOM1.txt");
if(infile.good()==0){

  myfile.open("ROOM.txt");
  

  myfile>>name>>area>>doors>>x>>y;
  roomn++;
    if(myfile.good()){
      rhead=new roomnode(name,area,doors,x,y,0,NULL);
      myfile>>name>>area >>doors>>x>>y;
      roomn++;
      rlast=rhead;
    }

    while(myfile.good()){
      rptr= new roomnode(name,area,doors,x,y,0,rlast);
      rlast->next=rptr;
      
      myfile>>name>>area>>doors>>x>>y;
      roomn++;
      rlast=rlast->next;
    }

   rtail=rptr;
   myfile.close();
}
else{
  
  myfile.open("ROOM1.txt");
  

  myfile>>name>>area>>doors>>x>>y>>status;
  roomn++;
    if(myfile.good()){
      rhead=new roomnode(name,area,doors,x,y,status,NULL);
      myfile>>name>>area >>doors>>x>>y>>status;
      roomn++;
      rlast=rhead;
    }

    while(myfile.good()){
      rptr= new roomnode(name,area,doors,x,y,status,rlast);
      rlast->next=rptr;
      myfile>>name>>area>>doors>>x>>y>>status;
      roomn++;
      rlast=rlast->next;
    }

   rtail=rptr;
   myfile.close();}
infile.close(); 

//------------------------------------------------//
infile.open("LAB1.txt");
if(infile.good()==0){

  myfile.open("LAB.txt");
  

  myfile>>name>>area>>doors>>x>>y>>comps;
  labn++;
    if(myfile.good()){
      lbhead=new labnode(name,area,doors,x,y,comps,0,NULL);
      
      myfile>>name>>area >>doors>>x>>y>>comps;
      labn++;
      lblast=lbhead;
    }

    while(myfile.good()){
      lbptr= new labnode(name,area,doors,x,y,comps,0,lblast);
      lblast->next=lbptr;
      myfile>>name>>area>>doors>>x>>y>>comps;
      labn++;
      lblast=lblast->next;
    }

   lbtail=lbptr;
   myfile.close();
}
else{
  
  myfile.open("LAB1.txt");
  

  myfile>>name>>area>>doors>>x>>y>>comps>>status;
  labn++;
    if(myfile.good()){
      lbhead=new labnode(name,area,doors,x,y,comps,status,NULL);
      myfile>>name>>area>>doors>>x>>y>>comps>>status;
      labn++;
      lblast=lbhead;
    }

    while(myfile.good()){
      lbptr= new labnode(name,area,doors,x,y,comps,status,lblast);
      lblast->next=lbptr;
      myfile>>name>>area>>doors>>x>>y>>comps>>status;
      labn++;
      lblast=lblast->next;
    }

   lbtail=lbptr;
   myfile.close();}
infile.close(); 
//-------------------------------------------------//
infile.open("LEC1.txt");
if(infile.good()==0){

  myfile.open("LEC.txt");
  

  myfile>>name>>area>>doors>>x>>y>>chairs;
  lecn++;
    if(myfile.good()){
      lchead=new lecnode(name,area,doors,x,y,chairs,0,NULL);
      myfile>>name>>area >>doors>>x>>y>>chairs;
      lecn++;
      lclast=lchead;
    }

    while(myfile.good()){
      lcptr= new lecnode(name,area,doors,x,y,chairs,0,lclast);
      lclast->next=lcptr;
      myfile>>name>>area>>doors>>x>>y>>chairs;
      lecn++;
      lclast=lclast->next;
    }

   lctail=lcptr;
   myfile.close();
}
else{
  
  myfile.open("LEC1.txt");
  

  myfile>>name>>area>>doors>>x>>y>>chairs>>status;
  lecn++;
    if(myfile.good()){
      lchead=new lecnode(name,area,doors,x,y,chairs,status,NULL);
      myfile>>name>>area>>doors>>x>>y>>chairs>>status;
      lecn++;
      lclast=lchead;
    }

    while(myfile.good()){
      lcptr= new lecnode(name,area,doors,x,y,chairs,status,lclast);
      lclast->next=lcptr;
      myfile>>name>>area>>doors>>x>>y>>chairs>>status;
      lecn++;
      lclast=lclast->next;
    }

   lctail=lcptr;
   myfile.close();}
infile.close(); 

//---------------------------------------------------//
/////////////////////////////////////////////////////////////////////////

cout<<"\n\n\n";
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n";
int n;
cout<<"\n\n";
cout<<"1.BOOKING-UNBOOKING\n";
cout<<"2.ADD\n";
cout<<"3.DELETE\n";
cout<<"4.MINIMUM ROOMS REQUIRED TO ACCOMODATE 'N' PERSON\n";
cout<<"5.NEAREST ROOM TO THE LOCATION\n";
cout<<"6.DETAILS\n";
cout<<"7.LAB WITH LEAST EQUIPMENT DENSITY\n";
cout<<"8.ADD EQUIPMENT TO LAB\n";
cout<<"9.SMALLEST LECTURE HALL REQUIRED FOR 'N' STUDENTS\n";
cout<<"10.EXIT\n\n";
cout<<"\nEnter the number....";
cin>>n;



while(n!=10){
//////////////////////////////BOOKING/////////////////////////////////////
if (n==1){
int n1;roomnode *buk;string roomno;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 
 
 cout<<"Enter the number  you want to book/unbook...."<<"\n1. ROOM\n"<<"2. LAB \n"<<"3. LECTURE HALL\n";//back ,exit
 cin>>n1;

   if (n1==1 || n1==2 || n1==3){
  		switch(n1){
    		case 1: buk=rhead;
            	buk->book(rhead);
          		break;

		    case 2: buk=lbhead;
	            buk->book(lbhead);
		        break;

		    case 3: buk=lchead;
	            buk->book(lchead);
         };
	}
	else
		  cout<<"Invalid Input\n";
	}
////////////////////////////////////ADD////////////////////////////////////
else if(n==2){
ostringstream oss;
int n1;
cout<<"Enter the number corresponding to category you want to add...\n"<<"1. ROOM\n"<<"2. LAB\n"<<"3. LECTURE HALL\n";
cin>>n1;
string labnum1,labnum;
int j;
stringstream mystream;
int labrnum;
stringstream ss2;
int i;
char ch;


if (n1==1 || n1==2 || n1==3){
  switch(n1){
    case 1:j=4;
          cout<<"--------------------ROOMS------------------------\n\n";
          cout<<"Enter the area of the room...\n";
          cin>> area;
          cout<<"Enter the doors of the room...\n";
           cin>> doors;
          cout<<"Enter the X of the room...\n";
          cin>> x;
          cout<<"Enter the Y of the room...\n";
          cin>> y;
		
		    
	      labrnum=0;
          char ch;
	       //labnum=itoa(labrnum);  
          labnum=rtail->name;        
	      while((ch=labnum[j])!='\0'){
	
	      labrnum=(10*labrnum)+(ch-'0');
	       j++;
           }
          labrnum++;
          
          i=0;	
          labnum="";
          while(labrnum){

	      labnum+=labrnum%10+'0';
	      labrnum/=10;
          i++;
          }

         for(j=0;j<i/2;j++){
         ch=labnum[i-1-j];
         labnum[i-j-1]=labnum[j];
         labnum[j]=ch;
           }


          name="Room"+labnum;
          rtail->next=new roomnode(name,area,doors,x,y,0,rtail);
          rtail=rtail->next;
          cout<< name<<" ADDED."<<endl;
          
     break; 
    case 2:j=3;
          cout<<"--------------------LABS------------------------\n\n";
          cout<<"Enter the area of the lab...\n";
          cin>> area;
          cout<<"Enter the doors of the lab...\n";
          cin>> doors;
          cout<<"Enter the X of the lab...\n";
          cin>> x;
          cout<<"Enter the Y of the lab...\n";
          cin>> y;
          cout<<"Enter the computers in the lab...\n";
          cin>> comps;
         
	      labrnum=0;
          
	//labnum=itoa(labrnum);  
          labnum=lbtail->name;        
	      while((ch=labnum[j])!='\0'){
	
	      labrnum=(10*labrnum)+(ch-'0');
	      j++;
          }
          labrnum++;
          
          i=0;	
          labnum=""; 
          while(labrnum){
          cout<<labnum<<endl;
	      labnum+=labrnum%10+'0';
	      labrnum/=10;
          i++; 
          }

          for(j=0;j<i/2;j++){
          ch=labnum[i-1-j];
          labnum[i-j-1]=labnum[j];
          labnum[j]=ch;
          }


          name="LAB"+labnum;
          lbtail->next=new labnode(name,area,doors,x,y,comps,0,lbtail);
          lbtail=lbtail->next;
          cout<< name<<" ADDED."<<endl;

break;
case 3:j=3;
          cout<<"--------------------LEC------------------------\n\n";
          cout<<"Enter the area of the lec...\n";
          cin>> area;
          cout<<"Enter the doors of the lec...\n";
          cin>> doors;
          cout<<"Enter the X of the lec...\n";
          cin>> x;
          cout<<"Enter the Y of the lec...\n";
          cin>> y;
          cout<<"Enter the chairs in the lec...\n";
          cin>> chairs;
         
	labrnum=0;
     
	//labnum=itoa(labrnum);  
          labnum=lctail->name;        
	      while((ch=labnum[j])!='\0'){
	
	      labrnum=(10*labrnum)+(ch-'0');
	      j++;
          }
          labrnum++;
          
          i=0;	
          labnum="";
          while(labrnum){

        	labnum+=labrnum%10+'0';
	        labrnum/=10;
          i++;
          }

          for(j=0;j<i/2;j++){
          ch=labnum[i-1-j];
          labnum[i-j-1]=labnum[j];
          labnum[j]=ch;
          }

           name="LEC"+labnum;
          lctail->next=new lecnode(name,area,doors,x,y,chairs,0,rtail);
           lctail=lctail->next;
          cout<< name<<" ADDED."<<endl;

  };
}
else
   cout<<"invalid input\n";

}
//////////////////////////////DELETE//////////////////////////////////////
else if(n==3){
 int n1;roomnode *delit;string n2;

 system("clear");
 cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
 
  cout<<"Enter the number you want to delete...\n"<<"1. ROOM\n"<<"2. LAB\n"<<"3. LECTURE HALL\n";
 cin>>n1;

 if (n1==1 || n1==2 || n1==3){
 	 switch(n1){
 	   case 1: delit=rhead;
            delit=delit->delt(rhead,rtail,rhead);
            if(delit->previous==NULL)
              rhead=delit;
            else if(delit->next==NULL)
              rtail=delit;
        break;
 	   case 2: delit=lbhead;
            delit->delt(lbhead,lbtail,lbhead);  
            if(delit->previous==NULL)
              lbhead=delit;
            else if(delit->next==NULL)
              lbtail=delit; 
        break;
 	   case 3: delit=lchead; 
            delit->delt(lchead,lctail,lchead);
            if(delit->previous==NULL)
              lchead=delit;
            else if(delit->next==NULL)
              lctail=delit;
      };

    }
  else{
       cout<<"Invalid input\n";}
}
////////////////////////////MIN ROOM REQ///////////////////////////////////
else if(n==4){
int n1,num;

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"    --------------------ROOMS-------------------------\n\n";

roomnode *min;
cout<<"Enter the number of members for accomodation in rooms...";
cin>>n1;
cout<<"\nROOMS: \n\n";
num=minroom(n1,rhead);
if(num!=0)
 cout<<"\nMinimum number of rooms required: "<<num<<endl<<endl;
else
 cout<<"Sorry!!Not enough space\n";
}
///////////////////////////////NEAREST ROOM/////////////////////////////////
else if(n==5){
roomnode *location,*near;

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"      --------------------ROOMS---------------------\n\n";
cout<<"Enter the Co-ordinates of Location:\n";
cout<<"X:";
cin>>x;
cout<<"Y:";
cin>>y;

near=nearest<roomnode>(rhead,x,y);
cout<<"\nThe nearest ROOM to location("<<x<<","<<y<<") is: ";
cout<<near->name<<endl<<endl;

}

/////////////////////////////////DETAILS/////////////////////////////////
else if(n==6){ 

system("clear");
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";

int n1;
roomnode *details;string roomno;
 cout<<"Enter the number...\n"
 << "1. ROOM\n"<<"2. LAB\n"<<"3. LECTURE HALL\n";//back ,exit

 cin>>n1;
 if (n1==1 || n1==2 || n1==3){
     switch(n1){
        case 1: details=rhead;
                details->detail(rhead); 
          break;
        case 2: details=lbhead;
                details->detail(lbhead);
          break;
        case 3: details=lchead;
                  details->detail(lchead);
         };
  
        }
  else{
     cout<<"Invalid input\n";}

       
 }

//////////////////////////LAB WITH LEAST EQUIP/////////////////////////
else if(n==7){

roomnode *least;
least=equip(lbhead);
cout<<"LAB with least equipment density is: "<<least->name<<endl<<endl;

}

//////////////////////////////ADD EQUIP//////////////////////////////
else if(n==8){

system("clear");
string del;
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";
cout<<"      --------------------LABS---------------------\n\n";
cout<<"Enter the LAB number you want to add equipments in...";
cin>>del;

equip(lbhead,del);

}
////////////////////////////SMALLEST LEC REQ///////////////////////////
else if(n==9){
system("clear");

cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n\n\n";

smallestlh(lchead);

}
///////////////////////////////////////////////////////////////////////
else
cout<<"INVALID INPUT\n";
///////////////////////////////////////////////////////////////////////
//cout << "Press ENTER to continue...";
//cin>>c;
//while(c!='\n'){
//cin>>c;}

cout<<"\n\n\n";
cout<<"***---------------***BOOKING SYSYTEM***-----------------***\n";

cout<<"\n\n";
cout<<"1.BOOKING-UNBOOKING\n";
cout<<"2.ADD\n";
cout<<"3.DELETE\n";
cout<<"4.MINIMUM ROOMS REQUIRED TO ACCOMODATE 'N' PERSON\n";
cout<<"5.NEAREST ROOM TO THE LOCATION\n";
cout<<"6.DETAILS\n";
cout<<"7.LAB WITH LEAST EQUIPMENT DENSITY\n";
cout<<"8.ADD EQUIPMENT TO LAB\n";
cout<<"9.SMALLEST LECTURE HALL REQUIRED FOR 'N' STUDENTS\n";
cout<<"10.EXIT\n\n";
cout<<"\nEnter the number....";
cin>>n;
}

//////////////////////////Output file/////////////////////////////////////
ofstream put;
roomnode *output;

output=rhead;
put.open("ROOM1.txt");
while(output!=NULL){
(*output)<<put;

output=output->next;}
put.close();

output=lbhead;
put.open("LAB1.txt");
while(output!=NULL){
(*output)<<put;

output=output->next;}
put.close();

output=lchead;
put.open("LEC1.txt");
while(output!=NULL){
(*output)<<put;

output=output->next;}
put.close();

/////////////////////////////////////////////////////////////////////////////





return 0;
}

