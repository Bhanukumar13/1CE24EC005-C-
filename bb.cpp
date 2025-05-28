#include<iostream>
using namespace std;
 class Person{
    public:
        string name;

        void setName(){
            cout<<"Enter the name:";
            cin>>name;

        }
        void getName(){
            cout<<name<<endl;
        }
 };
 int main(){
    Person *listofPeoples =new Person[3];
    for(int i=0; i<3; i++){
        listofPeoples[i].setName();
    }
    for(int i=0; i<3; i++){
        listofPeoples[i].getName();
    }
 }