#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;

    try{
        if(num<0)
            throw  "Negative number entered!";
        cout<<"You entered;"<<num<<endl;    
    }

}