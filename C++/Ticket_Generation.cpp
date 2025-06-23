#include<iostream.h>
class profile{
private:
char name [30];
Int age:
double aadhar, ticket:

public:
profile();
void add();
void ticket();
void print(); 
};

profile::profile(){
cout<<"enter the name";
cin>>name;
cout<<"enter the age: ";
cin>>age:
cout<<"enter the aadhar number:age:aadhar ";
cin>>name>>age>>aadhar;
}

void profile::add(){
cout<<"Input profile data name:age:aadhar";
cin>>name>>age>>aadhar:

}

void profile::print(){
cout<<your ticket no: "<<ticket<<endl;
cout<<"your name is "<<name<<endl;

}

void profile::ticket(){

ticket=age+aadhar;
cout<<setw(5)<<aadhar<<setw(1)<<age;
}
void main(){
profile pr[10];
int i;
i=10;
for(i=0;i<10;i++){
pr[i].add();
pr[i].ticket();
pr[i].print();

cout<<"value of i insido for loop"<<endl; 

cout<<"value of i outside for loop in main block;"<<i<<endl;
}
}