#include<iostream>
using namespace std;

class base{
    protected:
    int x;
};
 class Derived :public base
 {
  public:
    void setX(int val)
    {
        x=val;
    } 
    
    void display()
    {
        cout<<x<<endl;
    }
 };
 main(){
    Derived d;
    d.setX(22);
    d.display();
    return 0;
 }