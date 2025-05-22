#include<iostream>
using namespace std;

class Person
{
public:
    void hello()
    {
        cout<<"Hello"<<endl;
    }
private:
    void hello2()
    {
        cout<<"Hello2"<<endl;
    }
};

int main()
{
    Person P1;
    P1.hello();
    
}