#include<iostream>
using namespace std;
float volume(float a){
    float c=a*a*a;
    return c;
}
int main(){
    float x,volume;
    cout<<"enter the value of x:";
    cin>>x;
    volume=x*x*x;
    cout<<"volume of the cube"<<volume<<endl;
}