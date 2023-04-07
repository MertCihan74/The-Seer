//02.10.2020
#include <iostream>
using namespace std;
int main(){
int a;
	cout<<"Think a number between 1 and 100 and follow the instructions press 1 to continue"<<endl;
	cin>>a;	 
for(;;){
	if(a!=1){
	   cout<<"Please press 1"<<endl;
	   cin>>a;}
	if(a==1){
	   cout<<"Multiply your number by 2"<<endl;
	   cin>>a;
	   break;
	   }
 }	   
for(;;){
	if(a!=1){
	  cout<<"Please press 1"<<endl;
	  cin>>a;}
	if(a==1){
	   cout<<"Add 22 to the number you keep"<<endl;
  	   cin>>a;
	   break;}	   
 }
for(;;){
	if(a!=1){
	   cout<<"Please press 1"<<endl;
	   cin>>a;}
	if(a==1){
	   cout<<"Divide your number by 2"<<endl;
	   cin>>a;
	   break;}   
 }	
for(;;){
	if(a!=1){
	   cout<<"Please press 1"<<endl;
	   cin>>a;}
	if(a==1){
	   cout<<"Subtract the first number from the last number"<<endl;
       cin>>a;
	   break;}
}
for(;;){
	if(a!=1){
	   cout<<"Pleae press 1"<<endl;
	   cin>>a;}
	if(a==1){
	cout<<"The result is 11, right? Press 1 if true, press 0 otherwise"<<endl;
	cin>>a;
	break;}
}
	if(a==1)
	   cout<<"I'm the Seer :)"<<endl;
	else
	   cout<<"LIAR!!!"<<endl;
return(0);
}

