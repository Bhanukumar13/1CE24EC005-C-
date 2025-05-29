#include<iostream>
using namespace std;
float area_of_rectangle(float a,float b)
{
    float c=a*b;
    return c;
}
int main(){
    float x,y,area;
    cout<<"enter the length of rectangle:";
    cin>>x;
    cout<<"enter te breadth if rectangle:";
    cin>>y;
    area=x*y;
    cout<<"Area"<<area<<endl;
}